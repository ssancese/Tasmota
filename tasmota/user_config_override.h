/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota 

  Copyright (C) 2020  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
#warning **** user_config_override.h: Using Settings from this File ****

// -- Master parameter control --------------------
#ifdef CFG_HOLDER
  #undef CFG_HOLDER
#endif
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash


// -- Setup your own Wifi settings  ---------------
#ifdef  STA_SSID1
  #undef  STA_SSID1
#endif
#define STA_SSID1         "Vodafone-Ovile"      // [Ssid1] Wifi SSID

#ifdef  STA_PASS1
  #undef  STA_PASS1
#endif
#define STA_PASS1         "fpvFSweAwzeFgxr3"    // [Password1] Wifi password

#ifdef  STA_SSID2
  #undef  STA_SSID2
#endif
#define STA_SSID2         "Vodafone-IoT"        // [Ssid2] Wifi SSID

#ifdef  STA_PASS2
  #undef  STA_PASS2
#endif
#define STA_PASS2         "n,pTs5v&"            // [Password2] Wifi password


// Wi-Fi
/***********************************************************
 * Disable unsecured fallback WiFi (WifiManager)
 * In case your Wifi SSID is not available (i.e. access point dies), 
 * the WiFiManager will jump into action and make your tasmota devices 
 * available using an unsecured access point. Type WifiConfig 
 * into the tasmota console. 
 * If this parameter is set to WIFI_MANAGER, you might want to change 
 * it after completing the setup of your device. 
 * Some less risky options would be: 
 * WIFI_RESTART / WIFI_RETRY / WIFI_WAIT. (For details, 
 * see https://tasmota.github.io/docs/Commands/#wi-fi).
***********************************************************/

#ifdef WIFI_CONFIG_TOOL
  #undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL       WIFI_MANAGER      // [WifiConfig] Default tool if wifi fails to connect
                                                 //   (WIFI_RESTART/0, WIFI_MANAGER/2, WIFI_RETRY/4, WIFI_WAIT/5, WIFI_SERIAL/6, WIFI_MANAGER_RESET_ONLY/7)
                                                 //   (6.6.0.21 not supported: WIFI_SMARTCONFIG/1, WIFI_WPSCONFIG/3)


// -- Setup your own MQTT settings  ---------------
#ifdef MQTT_HOST
  #undef  MQTT_HOST
#endif
#define MQTT_HOST         "perry.local"        // [MqttHost]

#ifdef MQTT_USER
  #undef  MQTT_USER
#endif
#define MQTT_USER          "mosquitto_user"          // [MqttUser] MQTT user

#ifdef MQTT_PASSWORD
  #undef  MQTT_PASSWORD
#endif
#define MQTT_PASSWORD     "^S5oMxD1P(zKDd,>KdwQr9r"        // [MqttPassword] MQTT password

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif
//#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)

#ifdef USE_MQTT_TLS_CA_CERT
  #undef USE_MQTT_TLS_CA_CERT
#endif
//#define USE_MQTT_TLS_CA_CERT                     // Force full CA validation instead of fingerprints, slower, but simpler to use.  (+2.2k code, +1.9k mem during connection handshake)
                                                 // This includes the LetsEncrypt CA in tasmota_ca.ino for verifying server certificates

#ifdef MQTT_PORT
  #undef  MQTT_PORT
#endif
#define MQTT_PORT               8883              // [MqttPort] MQTT port (10123 on CloudMQTT). 8883 for TLS

// -- mDNS ----------------------------------------
#ifdef MDNS_ENABLED
  #undef  MDNS_ENABLED
#endif
#define MDNS_ENABLED            true              // [SetOption55] Use mDNS (false = Disable, true = Enable)

// -- NTP Server Pool ------------------------------------
#ifdef NTP_SERVER1
  #undef NTP_SERVER1
#endif
#define NTP_SERVER1            "pool.ntp.org"       // [NtpServer1] Select first NTP server by name or IP address
#ifdef NTP_SERVER2
  #undef NTP_SERVER2
#endif
#define NTP_SERVER2            "it.pool.ntp.org"       // [NtpServer2] Select second NTP server by name or IP address
#ifdef NTP_SERVER3
  #undef NTP_SERVER3
#endif
#define NTP_SERVER3            "0.it.pool.ntp.org"    // [NtpServer3] Select third NTP server by name or IP address

// -- Location ------------------------------------
#ifdef LATITUDE
  #undef LATITUDE
#endif
#define LATITUDE               44.479698         // [Latitude] Your location to be used with sunrise and sunset (Medicina, BO)

#ifdef LONGITUDE
  #undef LONGITUDE
#endif
#define LONGITUDE              11.639240         // [Latitude] Your location to be used with sunrise and sunset (Medicina, BO)


// -- HTTP ----------------------------------------
#ifdef WEB_SERVER
  #undef WEB_SERVER
#endif
#define WEB_SERVER             2                 // [WebServer] Web server (0 = Off, 1 = Start as User, 2 = Start as Admin)

#ifdef WEB_PASSWORD
  #undef WEB_PASSWORD
#endif
#define WEB_PASSWORD           "n,pTs5v&"        // [WebPassword] Web server Admin mode Password for WEB_USERNAME (empty string = Disable)




#endif  // _USER_CONFIG_OVERRIDE_H_
