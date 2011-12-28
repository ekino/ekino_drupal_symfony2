This module is a bridge between Symfony2 and Drupal.

The module must be used with a Symfony2 project including the EkinoDrupalBundle and the FOSUserBundle.

See https://github.com/ekino/EkinoDrupalBundle for more information

Configuration
-------------
Edit the settings.php file and the following lines :

    $conf['symfony2'] = array(
        'root'  => __DIR__.'/../..', // the project root path
        'drush' => array(
            'env' => 'app',
            'debug' => true
        )
    );

Hooks
-----

Some drupal hooks are sent to the Symfony Event Dispatcher

Registration :
    * drupal.user_login
    * drupal.user_logout

User Entity event :
    * drupal.user_load
    * drupal.user_insert
    * drupal.user_update
    * drupal.user_presave

