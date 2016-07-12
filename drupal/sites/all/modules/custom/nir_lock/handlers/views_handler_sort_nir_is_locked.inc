<?php
// Taken from content_lock with thanks to ergonlogic, ohnobinki, EugenMayer, et al.

/**
 * @file
 * Handler to identify if node is locked or not
 */

class views_handler_sort_nir_is_locked extends views_handler_sort {
  function query() {
    $this->ensure_my_table();
    $this->query->add_orderby($this->table_alias, 'timestamp', $this->options['order']);
  }
}
