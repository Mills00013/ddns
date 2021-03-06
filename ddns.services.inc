<?php

/**
 * @file
 *
 * Handles returning an array with all the available services
 *
 */

/**
 * Available Dynamic DNS services
 *
 * Most services taken from work by the OpenWRT project
 * https://github.com/openwrt/packages/blob/master/net/ddns-scripts/files/services
 *
 * Services should be in the form of $name => $url
 *
 * Custom service support should be implemented in this file
 */

function ddns_services() {
  $services = array(
    'dyndns.org' => 'http://[USERNAME]:[PASSWORD]@members.dyndns.org/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'zoneedit.com' => 'http://[USERNAME]:[PASSWORD]@dynamic.zoneedit.com/auth/dynamic.html?host=[DOMAIN]&dnsto=[IP]',
    'changeip.com' => 'http://[USERNAME]:[PASSWORD]@nic.changeip.com/nic/update?u=[USERNAME]&p=[PASSWORD]&cmd=update&hostname=[DOMAIN]&ip=[IP]',
    'free.editdns.net' => 'http://dyndns-free.editdns.net/api/dynLinux.php?p=[PASSWORD]&r=[DOMAIN]',
    'freedns.afraid.org' => 'http://[USERNAME]:[PASSWORD]@freedns.afraid.org/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'dnsmax.com' => 'http://update.dnsmax.com/update/?username=[USERNAME]&password=[PASSWORD]&resellerid=1&clientname=drupalddns&clientversion=7.x&protocolversion=2.0&updatehostname=[DOMAIN]&ip=[IP]',
    'thatip.com' => 'http://update.dnsmax.com/update/?username=[USERNAME]&password=[PASSWORD]&resellerid=2&clientname=drupalddns&clientversion=7.x&protocolversion=2.0&updatehostname=[DOMAIN]&ip=[IP]',
    'he.net' => 'http://[DOMAIN]:[PASSWORD]@dyn.dns.he.net/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'dnsdynamic.org' => 'http://[USERNAME]:[PASSWORD]@www.dnsdynamic.org/api/?hostname=[DOMAIN]&myip=[IP]',
    'dnsexit.com' => 'http://www.dnsexit.com/RemoteUpdate.sv?login=[USERNAME]&password=[PASSWORD]&host=[DOMAIN]&myip=[IP]',
    'ovh.com' => 'http://[USERNAME]:[PASSWORD]@www.ovh.com/nic/update?system=dyndns&hostname=[DOMAIN]&myip=[IP]',
    'dnsomatic.com' => 'http://[USERNAME]:[PASSWORD]@updates.dnsomatic.com/nic/update?hostname=[DOMAIN]&myip=[IP]',
    '3322.org' => 'http://[USERNAME]:[PASSWORD]@members.3322.org/dyndns/update?system=dyndns&hostname=[DOMAIN]&myip=[IP]',
    'namecheap.com' => 'http://dynamicdns.park-your-domain.com/update?host=[USERNAME]&domain=[DOMAIN]&password=[PASSWORD]&ip=[IP]',
    'easydns.com' => 'http://[USERNAME]:[PASSWORD]@api.cp.easydns.com/dyn/tomato.php?hostname=[DOMAIN]&myip=[IP]',
    'ddns.com.br' => 'http://[DOMAIN]:[PASSWORD]@members.ddns.com.br/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'mythic-beasts.com' => 'http://dnsapi4.mythic-beasts.com/?domain=[USERNAME]&password=[PASSWORD]&command=REPLACE%20[DOMAIN]%2060%20A%20DYNAMIC_IP&origin=.',
    'spdns.de' => 'http://[USERNAME]:[PASSWORD]@update.spdns.de/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'duiadns.net' => 'http://ipv4.duia.ro/dynamic.duia?host=[DOMAIN]&password=[PASSWORD]&ip4=[IP]',
    'twodns.de' => 'http://[USERNAME]:[PASSWORD]@update.twodns.de/update?hostname=[DOMAIN]&ip=[IP]',
    'mydns.jp' => 'http://www.mydns.jp/directip.html?MID=[USERNAME]&PWD=[PASSWORD]&IPV4ADDR=[IP]',
    'loopia.se' => 'http://[USERNAME]:[PASSWORD]@dns.loopia.se/XDynDNSServer/XDynDNS.php?system=custom&hostname=[DOMAIN]&myip=[IP]',
    'selfhost.de' => 'http://carol.selfhost.de/update?username=[USERNAME]&password=[PASSWORD]&myip=[IP]&hostname=1',
    'no-ip.pl' => 'http://[USERNAME]:[PASSWORD]@update.no-ip.pl/?hostname=[DOMAIN]',
    'domains.google.com' => 'http://[USERNAME]:[PASSWORD]@domains.google.com/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'schokokeks.org' => 'http://[USERNAME]:[PASSWORD]@dyndns.schokokeks.org/nic/update?myip=[IP]',
    'strato.de' => 'http://[USERNAME]:[PASSWORD]@dyndns.strato.com/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'variomedia.de' => 'http://[USERNAME]:[PASSWORD]@dyndns.variomedia.de/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'dtdns.com' => 'http://www.dtdns.com/api/autodns.cfm?id=[DOMAIN]&pw=[PASSWORD]&ip=[IP]',
    'dy.fi' => 'http://[USERNAME]:[PASSWORD]@www.dy.fi/nic/update?hostname=[DOMAIN]',
    'duckdns.org' => 'http://www.duckdns.org/update?domains=[USERNAME]&token=[PASSWORD]&ip=[IP]',
    'zzzz.io' => 'https://zzzz.io/api/v1/update/[DOMAIN]/?token=[PASSWORD]&ip=[IP]',
    'dynu.com' => 'http://api.dynu.com/nic/update?hostname=[DOMAIN]&myip=[IP]&username=[USERNAME]&password=[PASSWORD]',
    'nubem.com' => 'http://[USERNAME]:[PASSWORD]@nubem.com/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'nettica.com' => 'http://www.nettica.com/Domain/Update.aspx?U=[USERNAME]&PC=[PASSWORD]&FQDN=[DOMAIN]&N=[IP]',
    'zerigo.com' => 'http://update.zerigo.com/dynamic?host=[DOMAIN]&ip=[IP]&user=[USERNAME]&password=[PASSWORD]',
    'regfish.de' => 'http://dyndns.regfish.de/?fqdn=[DOMAIN]&forcehost=1&authtype=secure&token=[PASSWORD]&ipv4=[IP]',
    'nsupdate.info' => 'http://[USERNAME]:[PASSWORD]@ipv4.nsupdate.info/nic/update?hostname=[DOMAIN]&myip=[IP]',
    'dyndnss.net' => 'http://www.dyndnss.net/?user=[USERNAME]&pass=[PASSWORD]&domain=[DOMAIN]&updater=other',
    'goip.de' => 'https://www.goip.de/setip?username=[USERNAME]&password=[PASSWORD]&subdomain=[DOMAIN]&ip6=[IP]',
    'myonlineportal.net' => 'http://[USERNAME]:[PASSWORD]@myonlineportal.net/updateddns?hostname=[DOMAIN]&ip=[IP]',
    'dyns.net' => 'http://www.dyns.net/postscript011.php?username=[USERNAME]&password=[PASSWORD]&host=[DOMAIN]&ip=[IP]',
    'dnshome.de' => 'https://[USERNAME]:[PASSWORD]@www.dnshome.de/dyndns.php?hostname=[DOMAIN]&ip=[IP]',
  );

  return $services;
}
