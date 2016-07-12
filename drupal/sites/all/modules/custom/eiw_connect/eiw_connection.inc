<?php
/**
 * @file
 * Database code for MS SQL database servers.
 */

class DatabaseConnection_mssql {

  protected $mssql;

  protected $connection_error;

  public function __construct(array $connection_options = array()) {

    $host = variable_get('mssql_host', '');
    $port = variable_get('mssql_port', '1433');
    $domain = variable_get('mssql_domain', '');
    $user = variable_get('mssql_user', '');
    $password = decrypt(variable_get('mssql_password', ''));
    $schema = variable_get('mssql_schema', '');

    try {
      # MS SQL Server and Sybase with PDO_DBLIB
      $connection_str = 'dblib:host=' . $host;
      if (!empty($port)) {
        $connection_str .= ':' . $port;
      }
      if (!empty($schema)) {
        $connection_str .= ';dbname=' . $schema;
      }
      $user_str = $user;
      if (!empty($domain)) {
        $user_str = $domain . '\\' . $user_str;
      }

      $this->mssql = new PDO($connection_str, $user_str, $password);
    }
    catch(PDOException $e) {
      $msg = $e->getMessage();
      $this->connection_error = $msg;
      watchdog('EIW Connection', $msg, array(), WATCHDOG_ERROR);
    }

  }

  public function fetch_connection_error() {
    return $this->connection_error;
  }

  public function db_query($sql, $args=array()) {
    $query = $this->mssql->prepare($sql);
    $query->execute($args);
    return $query;
  }

  public function select_query($sql, $args=array()) {
    $results = $this->db_query($sql, $args);
    $return = $results->fetchAll();
    return $return;
  }
}
