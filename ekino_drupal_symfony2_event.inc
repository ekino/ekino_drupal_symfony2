<?php

/*
 * This file is part of the Ekino Drupal package.
 *
 * (c) 2011 Ekino
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */


/**
 * @param $name
 * @param \Symfony\Component\EventDispatcher\Event $event
 * @return mixed
 */
function symfony_event_dispatch($name, \Symfony\Component\EventDispatcher\Event $event)
{
    return symfony_service('event_dispatcher')->dispatch($name, $event);
}
