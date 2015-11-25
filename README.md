This module is a bridge between Symfony2 and Drupal.

The module must be used with a Symfony2 project including the EkinoDrupalBundle and the FOSUserBundle.

See https://github.com/ekino/EkinoDrupalBundle for more information

Configuration
-------------
Edit the settings.php file and the following lines :

```php
    $conf['symfony2'] = array(
        'root'  => __DIR__.'/../..', // the project root path
        'drush' => array(
            'env' => 'app',
            'debug' => true
        )
    );
```

In the case you have a customized Symfony structure, you can add a `kernel_factory` array key and create a custom closure
that will return the kernel class name:

```php

$conf['symfony2']['kernel_factory'] = function (array $conf) {
    $kernelName = 'PortalKernel';

    require_once sprintf('%s/apps/bootstrap.php.cache', $conf['symfony2']['root']);
    require_once sprintf('%s/apps/BaseKernel.php', $conf['symfony2']['root']);
    require_once sprintf('%s/apps/portal/%s.php', $conf['symfony2']['root'], $kernelName);

    return $kernelName;
};
```

Hooks
-----

Some drupal hooks are sent to the Symfony Event Dispatcher.

Registration :
* drupal.user_login
* drupal.user_logout

User Entity event :
* drupal.user_load
* drupal.user_insert
* drupal.user_update
* drupal.user_presave
