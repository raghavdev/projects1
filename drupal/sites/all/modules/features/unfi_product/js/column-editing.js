(function($) {

  // Column editing object for use with editableviews tables.
  Drupal.unfiColumnEditing = function(context) {
    var self = this;
    this.form = $('form', context);
    this.table = $('table.views-table', context);
    this.rows = $(this.table).children('tbody').children('tr');
    // The header_row is the row with the labels and checkboxes to toggle column
    // editing
    this.header_row = $($(this.table).children('thead').children('tr')[0]).addClass('column-editing-header').children('th');
      var $columnHeader = $('.column-editing-header');
    $columnHeader.clone().insertBefore('tbody tr').addClass('body-header');
    // Clone the first row in the body into a master_row. The master_row is a
    // row in the thead that will have form elements for editing the fields
    // in the same column.
    this.master_row = $(this.rows[0]).clone();

    this.initMasterRow();
    this.initBodyRows();
  };

  // Reattach classes, events and more after an ajax call
  Drupal.unfiColumnEditing.prototype.prepareMasterField = function(input, col, i) {
    var self = this;
    var info = self.parseField(input);
    if (info) {
      var new_name = 'master_' + info.field_name;
      if (info.type != 'file') {
        if (info.delta !== false) {
          if (info.type == 'submit') {
            new_name += '_' + info.delta;
          }
          else {
            new_name += '[' + info.delta + ']';
          }
        }
        if (info.field_key) {
          if (info.type == 'submit') {
            new_name += '_' + info.field_key;
          }
          else {
            new_name += '[' + info.field_key + ']';
          }
        }
      }
      var new_id = 'master-column-editing-source-' + info.field_name + '-' + (i++);
      if (info.type == 'date') {
        Drupal.settings.datePopup[new_id] = Drupal.settings.datePopup[info.id];
      }
      // Rename the input in the this.master_row so that it is just the
      // field_name, since we won't be using it's submitted value.
      $(input).attr('name', new_name)
        .attr('id', new_id)
        .addClass('unfi-column-editing-source')
        .addClass('unfi-column-editing-source-' + info.field_name)
        .addClass('unfi-column-editing-col-' + col + '-source')
        .removeClass('ajax-processed');
      // find triggers assigned as states
      trigger = $(input).parents('.unfi-state-trigger-' + info.field_name);
      if(trigger.length > 0) {
        $(input).change(function(){
          checked = false;
          inputs = $(this).parents('.unfi-state-trigger').find('input');
          for (var i = inputs.length - 1; i >= 0; i--) {
            if(inputs[i].checked) {
              checked = true;
            }
            if(checked) {
              $('.unfi-state-hidden-' + info.field_name).show();
            } else {
              $('.unfi-state-hidden-' + info.field_name).hide();
            }
          };
        });
      }
      $(input).siblings('label:first').attr('for', new_id);
      var editField = function(evt) {
        return self.editField('.unfi-column-editing-source-' + info.field_name, evt);
      }

      // Wrap file fields with a master id for our ajax callback
      if (info.type == 'file') {
        var css_field_name = info.field_name.replace(/_/g, '-');
        $(input).parents('.field-name-' + css_field_name).attr('id', 'master-file-' + css_field_name);
      }

      if (!info.ajax_submit) {
        // Don't attach an event listener to file fields, we can't do
        // anything when the value changes anyway.
        if (info.type != 'file') {
          $(input).bind('keyup change click', editField);
        }
      }
      else {
        // Use the existing elements ajax settings as a base, but since it is
        // an object if we alter the objects internals (aka properties) we also
        // alter the original, and that would be bad.
        // http://stackoverflow.com/a/3638034
        var ajax_settings = {};
        $.each(Drupal.settings.ajax[info.id], function(key, val) {
          if (key == 'submit') {
            ajax_settings.submit = {};
            $.each(val, function(subkey, subval) {
              ajax_settings.submit[subkey] = subval;
            });
          }
          else {
            ajax_settings[key] = val;
          }
        });
        // Override certain settings:
        ajax_settings.element = input;
        ajax_settings.selector = '#' + new_id;
        ajax_settings.submit._triggering_element_name = new_name;
        ajax_settings.url = Drupal.settings.basePath + 'unfi_product/ajax/master_file_upload/' + info.field_name + '/' + $('input[name=form_build_id]', self.form).val();
        ajax_settings.wrapper = new_id;
        Drupal.settings.ajax[new_id] = ajax_settings;
        Drupal.settings.urlIsAjaxTrusted[ajax_settings.url] = true;
      }
    }
  };

  Drupal.unfiColumnEditing.prototype.recreateMasterColumn = function(col) {
    var self = this;

    var cells = $(self.master_row).children('td');
    var cell = $(cells[col]);

    var isUnique = $(cell).hasClass('unfi-unique-column');
    var inputs = $('input, select, textarea', cell);
    // If the cell has form inputs:
    if (inputs.length && !isUnique) {
      // For each form input in the cell:
      for (var k = 0; k < inputs.length; k++) {
        self.prepareMasterField(inputs[k], col, k);
      }
    }
  };

  Drupal.unfiColumnEditing.prototype.initMasterRow = function() {
    var self = this;

    // Remove id's for all elements except for inputs (those will be handled later)
    var elems = $('[id]', this.master_row).not('input, select, textarea').each(function() {
      $(this).removeAttr('id');
    });

    var unique_cells = $(this.master_row).children('td.unfi-unique-column');
    for (var j = 0; j < unique_cells.length; j++) {
      $(unique_cells[j]).html('');
    }

    // Try to detach all behaviors on the master row first.
    Drupal.detachBehaviors(this.master_row, Drupal.settings);

    // For each cell in the cloned row:
    var cells = $(this.master_row).children('td');
    for (var j = 0; j < cells.length; j++) {
      var isUnique = $(cells[j]).hasClass('unfi-unique-column');
      var inputs = $('input, select, textarea', cells[j]);
      // If the cell has form inputs:
      if (inputs.length && !isUnique) {
        // For each form input in the cell:
        for (var k = 0; k < inputs.length; k++) {
          self.prepareMasterField(inputs[k], j, k);
        }
        // Add a link to enable/disable the column editing for a column.
        $(cells[j]).addClass('unfi-column-editing-col-' + j);
        $(this.header_row[j]).append('<a href="#" class="unfi-column-editing-col-link unfi-column-editing-col-' + j + '-link">' + Drupal.t('Edit items') + '</a>');

        // Attach an onchange event to our link to turn on/off a function to
        // set all values in the same column the same
        $('.unfi-column-editing-col-link', this.header_row[j]).click({'col':j}, function(event) {
          event.preventDefault();
          return self.toggleEditing(this, event);
        });
      }
      else {
        $(cells[j]).html('');
      }
    }

    // Add it to the DOM
    $(this.table).children('thead').children('tr').after(this.master_row);
    $(this.master_row).before('<tr><td colspan="' + cells.length + '"><strong>' + Drupal.t('Master Record: Use this record to apply the value to all items at once. To edit a column individually, click "Edit Items".') + '</strong></td></tr>');
    Drupal.attachBehaviors(this.master_row, Drupal.settings);
  };

  Drupal.unfiColumnEditing.prototype.prepareBodyField = function(input, col) {
    var self = this;

    var info = self.parseField(input);
    if (info) {
      $(input).addClass('unfi-column-editing-target')
        .addClass('unfi-column-editing-target-' + info.field_name)
        .addClass('unfi-column-editing-col-' + col + '-target');

      // For file fields, we also want to show/hide the wrapping "Add a new file" div
      if (info.type == 'file') {
        $(input).parents('.form-type-managed-file').addClass('unfi-column-editing-col-' + col + '-target');
      }

      return info.field_name;
    }

    return false;
  }

  Drupal.unfiColumnEditing.prototype.initBodyRows = function() {
    var self = this;

    // Store a list of enabled columns.
    var disabled_cols = [];

    // Loop through all the rows, and if they all have the same value, then
    // set the value for our new cell and mark it as the same; disabling
    // the values in the other rows and checking our box that says these
    // are the same.
    for (var i = 0; i < this.rows.length; i++) {
      var cells = $(this.rows[i]).children('td');
      for (var j = 0; j < cells.length; j++) {
        var inputs = $('input, select, textarea', cells[j]);
        // List of unique fields, since radios and checkboxes use the same name
        // but have multiple inputs.
        var fields = {};
        // If the cell has form inputs:
        if (inputs.length) {
          // For each form input in the cell, add a class
          for (var k = 0; k < inputs.length; k++) {
            var input = inputs[k];
            var field_name = self.prepareBodyField(input, j);
            if (field_name) {
              fields[field_name] = 1;
            }
          }

          // If the column is already in the disabled list, then don't bother
          // comparing each fields value.
          if ($.inArray(j, disabled_cols) == -1) {
            // Loop through the fields to get their values
            $.each(fields, function(field_name) {
              var source_value = self.getFieldValue($('.unfi-column-editing-source-' + field_name, self.master_row));
              var my_value = self.getFieldValue($('.unfi-column-editing-target-' + field_name, cells[j]));
              // If any value does not match the source value, we need to
              // clear the source value, disable it, and uncheck the box.
              if (!self.compareValues(source_value, my_value)) {
                self.setFieldValue($('.unfi-column-editing-source-' + field_name, self.table), '');
                disabled_cols.push(j);
              }
            });
          }
        }
      }
    }

    // Initialize the editing enabled/disabled state of each column.
    for (var j = 0; j < this.header_row.length; j++) {
      if ($.inArray(j, disabled_cols) > -1) {
        self.disableColumnEditing(j);
      }
      else {
        self.enableColumnEditing(j);
      }
    }
  };

  // Takes a form field and parses it's field name and sets some data
  // attributes on the field.
  Drupal.unfiColumnEditing.prototype.parseField = function(input) {
    var name = $(input).attr('name');
    var type = $(input).attr('type');
    var id = $(input).attr('id');
    var ajax_submit = false;
    if (Drupal.settings.ajax && Drupal.settings.ajax[id] && (type == 'submit' || type == 'button')) {
      ajax_submit = true;
    }

    var re, e_re;

    // File field names have a different naming format.
    if (type == 'file') {
      re = /files\[([a-z_]+?)_([0-9]+?)_([a-z_]+?)_([a-z_]{2,3}_[0-9]+?).*?\]/i;
      e_re = /([a-z_]{2,3})_([0-9]+)/i;
    }
    // Button names have a different naming format.
    else if (type == 'submit') {
      re = /([a-z_]+)_([0-9]+)_([a-z_]+?)_([a-z_]{2,3}_[0-9]+?.*)/i;
      e_re = /([a-z_]{2,3})_([0-9]+)_([a-z_]+)/i;
    }
    else {
      // Regular expression for matching field names in the format:
      // node[123][field_name][und][0][value]
      // node[123][title]
      // More generically, editableviews uses the format:
      // entity_type[entity_id][field_name]
      // So this regex should work for any view using EditableViews with
      // our class.
      re = /([a-z_]+)\[([0-9]+)\]\[([^\]]+)\](.*)/i;
      // Regular expression for matching Field API arrays in the format:
      // [und][0][value]
      // [und][0][fid]
      e_re = /\[([a-z]+)\]\[([0-9]+)\]\[([a-z0-9_]+)\](.*)/i;
    }

    var matches = name.match(re);
    if (matches) {
      var entity_type = matches[1];
      var entity_id = matches[2];
      var field_name = matches[3];
      var extra = matches[4];
      var field_key = 'value';

      $(input).data('entity_type', entity_type);
      $(input).data('field_name', field_name);
      var ret = {
        'entity_type': entity_type,
        'entity_id': entity_id,
        'field_name': field_name,
        'extra': extra,
        'id': id,
        'type': type,
        'ajax_submit': ajax_submit,
        'language': false,
        'delta': false,
        'field_key': false,
      }

      if (extra != '') {
        var extra_matches = extra.match(e_re);
        if (extra_matches) {
          var lang = extra_matches[1];
          var delta = extra_matches[2];
          ret.language = lang;
          ret.delta = delta;
          field_key = extra_matches[3] || field_key;
          if (extra_matches[4] == '[date]') {
            ret.type  = 'date';
          }
        }

        ret.field_key = field_key;
        $(input).data('field_key', field_key);
      }

      return ret;
    }
    return false;
  };

  // Figure out the field value. We can't just use $(input).val() because of
  // radio buttons, file fields and checkboxes.
  Drupal.unfiColumnEditing.prototype.getFieldValue = function(input) {
    var values = {};
    var self = this;

    $(input).each(function() {
      var input_type = $(this).attr('type');
      var field_key = $(this).data('field_key', field_key);
      if (!values[field_key]) {
        values[field_key] = [];
      }

      switch (input_type) {
        case 'radio':
        case 'checkbox':
          var checked = $(this).attr('checked');
          if (checked) {
            values[field_key].push($(this).val());
          }
          break;

        case 'file':
          // We can't do anything with it here.
          break;

        default:
          values[field_key].push($(this).val());
          break;
      }
    });

    return values;
  };

  // Set the field value. We can't just use $(input).val('val') because of
  // radio buttons, file fields and checkboxes.
  Drupal.unfiColumnEditing.prototype.setFieldValue = function(input, values) {
    var self = this;

    $(input).each(function(index) {
      var input_type = $(this).attr('type');
      var field_key = $(this).data('field_key');
      var value = values[field_key];

      switch (input_type) {
        case 'radio':
        case 'checkbox':
          if (value instanceof Array) {
            var hasVal = (function(a) {
              return function(b) {
                return self.compareValues(a, b);
              }
            })($(this).val());
            if (value.filter(hasVal).length) {
              $(this).attr('checked', 'checked');
            }
            else {
              $(this).removeAttr('checked');
            }
          }
          else {
            if (self.compareValues($(this).val(), value)) {
              $(this).attr('checked', 'checked');
            }
            else {
              $(this).removeAttr('checked');
            }
          }
          break;

        case 'file':
          // We can't set the file input value.
          break;

        default:
          var delta = index;

          // Since fields can have multiple values
          // and each field is replicated for each entity,
          // determine this field instance's delta simply by subtraction
          if (value instanceof Array) {
            if (value.length > 0) {
              while (delta >= value.length) {
                delta -= value.length;
              }
            }
            else {
              value = '';
            }
          }

          if (value instanceof Array) {
            $(this).val(value[delta]);
          }
          else {
            $(this).val(value);
          }
          break;
      }
    });
  };

  // Toggle column editing for a specific column.
  Drupal.unfiColumnEditing.prototype.toggleEditing = function(input, evt) {
    var self = this;

    var col = evt.data.col;
    $('.unfi-column-editing-col-' + col).toggleClass('unfi-column-editing-disabled');
    if ($('.unfi-column-editing-col-' + col).hasClass('unfi-column-editing-disabled')) {
      self.disableColumnEditing(col);
    }
    else {
      self.enableColumnEditing(col);
    }
  };

  // Enable editing for a specific column.
  Drupal.unfiColumnEditing.prototype.disableColumnEditing = function(col) {
    $('.unfi-column-editing-col-' + col + '-target', this.table).removeAttr('readonly').removeAttr('tabindex').removeClass('disable-editing');
    $('.unfi-column-editing-col-' + col + '-target', this.table).parents('td').addClass('enable-editing');
    $('.unfi-column-editing-col-' + col, this.table).addClass('unfi-column-editing-disabled');
    $('.unfi-column-editing-col-' + col + '-link', this.table).html(Drupal.t('Edit column'));
  };

  // Disable editing for a specific column.
  Drupal.unfiColumnEditing.prototype.enableColumnEditing = function(col) {
    $('.unfi-column-editing-col-' + col + '-target', this.table).attr({'readonly': 'readonly', 'tabindex': -1}).addClass('disable-editing');
    $('.unfi-column-editing-col-' + col + '-target', this.table).parents('td').removeClass('enable-editing');
    $('.unfi-column-editing-col-' + col, this.table).removeClass('unfi-column-editing-disabled');
    $('.unfi-column-editing-col-' + col + '-link', this.table).html(Drupal.t('Edit items'));
  };

  // Edit all target values of a given source field
  Drupal.unfiColumnEditing.prototype.editField = function(input, evt) {
    var field_name = $(input).data('field_name');
    var input_type = $(input).attr('type');
    var value = this.getFieldValue(input);

    this.setFieldValue($('.unfi-column-editing-target-' + field_name, this.table), value);
  };

  Drupal.unfiColumnEditing.prototype.compareValues = function(a, b) {
    var self = this;
    // Based on http://stackoverflow.com/a/14853974

    // If either a or b is an instance of an Object (or any subclass)
    if (a instanceof Object || b instanceof Object) {
      // Then compare their types first, this means an Array and an Object will
      // never be equal.
      if (typeof a != typeof b) {
        return false;
      }
    }
    // Otherwise they are simple types, we can compare them directly
    else {
      return a == b;
    }

    // if either is false, return
    if (!a || !b) {
      return a === b; // If they both evaluate to false, they are equal
    }
    if (a instanceof Array && b instanceof Array) {
      // compare lengths - can save a lot of time
      if (a.length != b.length) {
        return false;
      }

      for (var i = 0, l=a.length; i < l; i++) {
        if (!self.compareValues(a[i], b[i])) {
          return false;
        }
      }
    }
    else if (a instanceof Object && b instanceof Object) {
      //For the first loop, we only check for types
      for (propName in a) {
        // Check for inherited methods and properties - like .equals itself
        // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Object/hasOwnProperty
        // Return false if the return value is different
        if (a.hasOwnProperty(propName) != b.hasOwnProperty(propName)) {
          return false;
        }
        // Compare properties
        else if (!self.compareValues(a[propName], b[propName])) {
          return false;
        }
      }
      // Now a deeper check using other objects property names
      for (propName in b) {
        // We must check instances anyway, there may be a property that only
        // exists in b. I wonder, if remembering the checked values from the
        // first loop would be faster or not.
        if (a.hasOwnProperty(propName) != b.hasOwnProperty(propName)) {
          return false;
        }
        else if (!self.compareValues(a[propName], b[propName])) {
          return false;
        }
      }
      // If everything passed, let's say YES
      return true;
    }
    return true;
  }

  // Store column editing instances.
  Drupal.unfiColumnEditingInstance = {};

  /**
   * Add in auto hiding based off Exclusive Date Field
   */

  Drupal.behaviors.unfiExclusiveHide = {
    attach: function (context, settings) {
      $('.field-name-field-wf-exclusive-end-date').hide();
      if($('#master-column-editing-source-field_exclusive-2').val() == "Exclusive Item"){
        $('.field-name-field-wf-exclusive-end-date').show();
        $('#master-column-editing-source-field_wf_exclusive_end_date-3').removeAttr("disabled");
      }

      $('#master-column-editing-source-field_exclusive-2').change(function() {
        if(document.getElementById("master-column-editing-source-field_exclusive-2").value == "Exclusive Item"){
          $('.field-name-field-wf-exclusive-end-date').show();
          $('#master-column-editing-source-field_wf_exclusive_end_date-3').removeAttr("disabled");
        }else{
          $('.field-name-field-wf-exclusive-end-date').hide();
        }
      });
    }
  }

  /**
   * Add in the cookie functionality for Workflow Comments
   */
  Drupal.behaviors.unfiCommentSave = {
    attach: function (context, settings) {
      $(window).bind('load', function() {
        //Gets Node ID
        var u = context['location']['pathname'].split('/');

        //Gets the value of the cookie
        var re = new RegExp("workflowComment" + u[2] + "=([^;]+)");
        var value = re.exec(document.cookie);

        //Updates value of WYSIWYG
        if(value != null) {
          tinyMCE.activeEditor.setContent(value[1]);
        }

        var d = new Date();
        d.setTime(d.getTime() + (5*24*60*60*1000)); //Cookie expires in 5 days
        var expires = "expires="+d.toUTCString();

        //Sets up function to save the value of the textarea
        tinyMCE.activeEditor.onKeyUp.add(function(ed, e) {
          document.cookie = "workflowComment" + u[2] + "=" + tinyMCE.activeEditor.getContent() + "; " + expires;
        });

        //Sets up cookie clearing function
        $('.workflow-form-container input[type=submit]').click(function(){
          document.cookie= "workflowComment" + u[2] + "=" + "; " + expires;
        });
      });
    }
  }

  /**
   * Add column-editing to tables with the right class.
   */
  Drupal.behaviors.unfiColumnEditing = {
    attach: function (context, settings) {
      // Attach the column editing behavior to tables with the
      // 'unfi-column-editing' class.
      $('.unfi-column-editing', context).once('unfi-column-editing-view', function() {
        var id = $('form', this).attr('id');
        Drupal.unfiColumnEditingInstance[id] = new Drupal.unfiColumnEditing(this);
      });

      // Attach to child elements of an editable table.
      var parentEditingView = $(context).parents('.unfi-column-editing');
      if (parentEditingView.length) {
        var id = $('form', parentEditingView[0]).attr('id');
        var parentCell = $(context).parents('td');
        var instance = Drupal.unfiColumnEditingInstance[id];
        if (parentCell.length) {
          var col = parentCell[0].cellIndex;
          var isMaster = $(parentCell[0]).hasClass('unfi-column-editing-col-' + col);
          var columnEditingDisabled = $('.unfi-column-editing-col-' + col, instance.table).hasClass('unfi-column-editing-disabled');

          if (isMaster) {
            instance.recreateMasterColumn(col);
          }
          else {
            var inputs = $('input, select, textarea', context);
            if (inputs.length) {
              for (var i = 0; i < inputs.length; i++) {
                var input = inputs[i];
                instance.prepareBodyField(input, col);
              }
            }
          }

          if (columnEditingDisabled || $('.unfi-unique-column')) {
            instance.disableColumnEditing(col);
          }
          else {
            instance.enableColumnEditing(col);
          }
        }
      }
    }
  }

})(jQuery);
