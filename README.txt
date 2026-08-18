ESPEasy ESP-01 1 MB – Browser-Build ohne lokale Installation
==============================================================

Ziel-Firmware:
- ESP8266 / ESP-01 mit 1 MB Flash
- ESPEasy mega-20260720 (exakter Commit 8ceb5eeeb1dad281196f072f2fec9e43469f8798)
- MQTT: C005 Home Assistant / openHAB MQTT
- DS18B20: P004
- SHT30/SHT31/SHT35: P068 SHT3x
- Rules
- I2C-Multiplexer (z.B. TCA9548A/TCA9543A)
- I2C-Scanner
- Standard-I2C-Pins für ESP-01: SDA=GPIO0, SCL=GPIO2

So geht's komplett im Browser:
1. Auf github.com ein neues leeres Repository erstellen.
2. Den INHALT dieses ZIPs ins Repository hochladen. Wichtig: Der Ordner .github muss mit hochgeladen werden.
3. Im Repository oben auf "Actions" klicken.
4. Links "Build ESPEasy ESP-01 1MB" wählen.
5. "Run workflow" -> "Run workflow" anklicken.
6. Nach einigen Minuten den fertigen Lauf öffnen.
7. Unter "Artifacts" das Artefakt
   "ESPEasy-ESP01-1M-SHT35-MQTT-DS18B20-Rules" herunterladen.
8. Darin liegt die direkt flashbare Datei:
   ESPEasy_mega_20260720_ESP01_1M_SHT35_MQTT_DS18B20_Rules.bin

Flash-Hinweis:
- Vorher in ESPEasy unbedingt ein Settings-Backup machen.
- Bei einem normalen ESP8266/ESP-01 wird firmware.bin ab Adresse 0x000000 geflasht.
- Bei einem Update NICHT "Erase flash" verwenden, wenn die vorhandenen Einstellungen erhalten bleiben sollen.
- Wegen des großen Versionssprungs von 2021 auf 2026 ist ein Backup besonders wichtig.

Falls GitHub Actions beim ersten Lauf deaktiviert ist:
Repository -> Actions -> Workflows aktivieren.
