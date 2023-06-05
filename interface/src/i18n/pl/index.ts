import type { BaseTranslation } from '../i18n-types';
/* prettier-ignore */
/* eslint-disable */

const pl: BaseTranslation = {
  LANGUAGE: 'Język',
  RETRY: 'Ponów',
  LOADING: 'Ładowanie',
  IS_REQUIRED: 'Pole {0} nie może być puste!',
  SIGN_IN: 'Zaloguj się',
  SIGN_OUT: 'Wyloguj się',
  USERNAME: '{{Użytkownik|Nazwa użytkownika|}}',
  PASSWORD: 'Hasło',
  SU_PASSWORD: 'Hasło "su"',
  DASHBOARD: 'Pulpit',
  SETTINGS_OF: 'Ustawienia {0}',
  HELP_OF: 'Pomoc {0}',
  LOGGED_IN: 'Zalogowano użytkownika {name}.',
  PLEASE_SIGNIN: 'Zaloguj się aby kontynuować.',
  UPLOAD_SUCCESSFUL: 'Wysyłanie zakończone.',
  DOWNLOAD_SUCCESSFUL: 'Pobieranie zakończone.',
  INVALID_LOGIN: 'Nieprawidłowy użytkownik lub hasło!',
  NETWORK: '{{Sieć|sieci|}}',
  SECURITY: '{{B|b|}}ezpieczeństw{{o|a|}}',
  ONOFF_CAP: 'wł./wył.',
  ONOFF: 'włączono/wyłączono',
  TYPE: '{{T|t|}}yp{{|u|}}',
  DESCRIPTION: 'Opis',
  ENTITIES: 'encj{{i|a|e|e|i}}',
  REFRESH: 'Odśwież',
  EXPORT: 'Eksportuj',
  DEVICE_DETAILS: 'Szczegóły urządzenia',
  ID_OF: 'ID {0}',
  DEVICE: 'urządzenia',
  PRODUCT: 'produktu',
  BRAND: 'Marka',
  VERSION: 'Wersja',
  ENTITY_NAME: '{{N|n|}}azwa encji',
  VALUE: '{{W|w|}}artość',
  DEVICE_DATA: 'Dane z urządzeń',
  SENSOR_DATA: 'Dane z czujników',
  DEVICES: 'Urządzenia',
  SENSORS: 'Czujniki',
  RUN_COMMAND: 'Wykonaj komendę',
  CHANGE_VALUE: 'Zmiana wartości',
  CANCEL: 'Anuluj',
  RESET: 'Reset{{uj|owanie|}}',
  APPLY_CHANGES: 'Zapisz zmiany ({0})',
  UPDATE: 'Zmień',
  EXECUTE: 'Wykonaj',
  REMOVE: 'Usuń',
  PROBLEM_UPDATING: 'Problem z uaktualnieniem!',
  PROBLEM_LOADING: 'Problem z załadowaniem!',
  HTTP_ERROR: 'Error {0}', // TODO translate
  ANALOG_SENSOR: '{{u|u||ustawienia u|ustawień u}}rządzeni{{a podłączonego do EMS-ESP|e||a podłączonego do EMS-ESP|a podłączonego do EMS-ESP}}',
  ANALOG_SENSORS: 'Urządzenia podłączone do EMS-ESP',
  SETTINGS: 'ustawienia',
  UPDATED_OF: 'Zaktualizowano {0}.',
  UPDATE_OF: 'Aktualizacja {0}',
  REMOVED_OF: 'Usunięto ustawienia {0}.',
  DELETION_OF: 'Kasowanie {0}',
  OFFSET: 'Korekta ±',
  FACTOR: 'Mnożnik',
  FREQ: 'Częstotliwość',
  DUTY_CYCLE: 'Wypełnienie',
  UNIT: 'J.m.',
  STARTVALUE: 'Wartość początkowa',
  WARN_GPIO: 'Uwaga! Zachowaj ostrożność przypisując GPIO do urządzenia!',
  EDIT: 'Edycja',
  SENSOR: '{{c|ustawienia c||ustawień c|}}zujnika',
  TEMP_SENSOR: 'czujnika temperatury',
  TEMP_SENSORS: 'Czujniki temperatury 1-Wire®',
  WRITE_CMD_SENT: 'Komenda zapisu została wysłana.',
  EMS_BUS_WARNING: 'Brak połączenia z magistralą EMS. Jeśli ten błąd występuje dłużej niż kilka sekund, sprawdź ustawienia oraz profil płytki interfejsu.',
  EMS_BUS_SCANNING: 'Trwa skanowanie urządzeń na magistrali EMS...',
  CONNECTED: '{{połączono|połączenie|}}',
  TX_ISSUES: 'problem z zapisem na magistralę EMS, spróbuj wybrać inny "Tryb transmisji (Tx)"',
  DISCONNECTED: 'brak połączenia',
  EMS_SCAN: 'Czy na pewno wykonać pełne skanowanie magistrali EMS?',
  EMS_BUS_STATUS: 'Status magistrali EMS',
  ACTIVE_DEVICES: 'Aktywne urządzenia i czujniki',
  EMS_DEVICE: 'Urządzenie EMS',
  SUCCESS: 'Udane',
  FAIL: 'Nieudane',
  QUALITY: 'Jakość',
  SCAN_DEVICES: 'Wyszukiwanie nowych urządzeń',
  EMS_BUS_STATUS_TITLE: 'Aktywność',
  SCAN: 'Skanuj',
  STATUS_NAMES: [
    'EMS, telegramy odebrane (Rx)',
    'EMS, wysłane telegramy "odczyt" (Tx)',
    'EMS, wysłane telegramy "zapis" (Tx)',
    'Odczyty czujników temperatury 1-Wire®',
    'Odczyty czujników analogowych i cyfrowych',
    'Publikacje MQTT',
    'Wywołania API',
    'Wpisy w SysLog'
  ],
  NUM_DEVICES: '{num} urządze{{ń|nie|nia|nia|ń}} EMS',
  NUM_TEMP_SENSORS: '{num} czujni{{ków|k|ki|ki|ków}} temperatury',
  NUM_ANALOG_SENSORS: '{num} inn{{ych|e|e|e|ych}} urządze{{ń|nie|nia(two)|nia|ń}} podłączon{{ych|e|e|e|ych}} do EMS-ESP',
  NUM_DAYS: '{num} d{{ni|zień|ni|ni|ni}}',
  NUM_SECONDS: '{num} sekun{{d|da|dy|dy|d}}',
  NUM_HOURS: '{num} godzi{{n|na|ny|ny|n}}',
  NUM_MINUTES: '{num} minu{{t|ta|ty|ty|t}}',
  APPLICATION_SETTINGS: 'Ustawienia aplikacji',
  CUSTOMIZATIONS: 'Personalizacja',
  APPLICATION_RESTARTING: 'Trwa ponowne uruchamianie',
  INTERFACE_BOARD_PROFILE: 'Profil płytki interfejsu',
  BOARD_PROFILE_TEXT: 'Wybierz z listy gotowy profil płytki interfejsu lub "własny..." i samodzielnie skonfiguruj posiadany sprzęt.',
  BOARD_PROFILE: 'Profil płytki',
  CUSTOM: 'własny',
  GPIO_OF: 'GPIO {0}',
  BUTTON: 'przycisku',
  TEMPERATURE: '1-Wire®',
  PHY_TYPE: 'Typ układu ethernetowego (PHY)',
  DISABLED: '{{wyłączono|brak|}}',
  TX_MODE: 'Tryb transmisji (Tx)',
  EMS_BUS: '{{magistrali EMS|na magistrali|}}',
  HARDWARE: 'sprzętowy',
  GENERAL_OPTIONS: 'Opcje podstawowe',
  LANGUAGE_ENTITIES: 'Język encji',
  HIDE_LED: 'Wyłącz LED',
  ENABLE_TELNET: 'Aktywuj dostęp dla konsoli Telnet',
  ENABLE_ANALOG: 'Aktywuj urządzenia GPIO (czujniki analogowe i cyfrowe oraz wyjścia cyfrowe)',
  CONVERT_FAHRENHEIT: 'Konwertuj temperatury do skali Fahrenheita',
  BYPASS_TOKEN: 'Pomiń autoryzację tokenem w wywołaniach API',
  READONLY: 'Tryb pracy "tylko do odczytu" (blokuje wszystkie komendy zapisu na magistralę EMS)',
  UNDERCLOCK_CPU: 'Obniż taktowanie CPU',
  ENABLE_SHOWER_TIMER: 'Aktywuj minutnik prysznica',
  ENABLE_SHOWER_ALERT: 'Aktywuj alarm prysznica',
  TRIGGER_TIME: 'Wyzwalaj po czasie',
  COLD_SHOT_DURATION: 'Czas trwania tryśnięcia zimnej wody',
  FORMATTING_OPTIONS: 'Opcje formatowania',
  BOOLEAN_FORMAT_DASHBOARD: 'Wartości dwustanowe na pulpicie',
  BOOLEAN_FORMAT_API: 'Wartości dwustanowe w API/MQTT',
  ENUM_FORMAT: 'Wartości z listy w API/MQTT',
  INDEX: 'indeks',
  ENABLE_PARASITE: 'Aktywuj zasilanie pasożytnicze',
  LOGGING: 'Logowanie',
  LOG_HEX: 'Loguj telegramy EMS w systemie szesnastkowym (hex)',
  ENABLE_SYSLOG: 'Aktywuj SysLog',
  LOG_LEVEL: 'Poziom logowania',
  MARK_INTERVAL: 'Znaczniki interwałów (0=brak)',
  SECONDS: 'sekund',
  MINUTES: 'minut',
  HOURS: 'godzin',
  RESTART: 'Restart',
  RESTART_TEXT: 'Aby zastosować wprowadzone zmiany interfejs EMS-ESP musi zostać zrestartowany.',
  RESTART_CONFIRM: 'Na pewno chcesz zrestartować interfejs EMS-ESP?',
  COMMAND: '{{Komenda|KOMENDA|}}',
  CUSTOMIZATIONS_RESTART: 'Wszystkie personalizacje zostały usunięte. Restartuję...',
  CUSTOMIZATIONS_FULL: 'Wybrano za dużo obiektów. Wprowadź zmiany w mniejszych partiach.',
  CUSTOMIZATIONS_SAVED: 'Personalizacje zostały zapisane.',
  CUSTOMIZATIONS_HELP_1: 'Wybierz urządzenie EMS, dostosuj opcje lub kliknij by zmienić nazwę encji.',
  CUSTOMIZATIONS_HELP_2: 'oznacz jako ulubioną',
  CUSTOMIZATIONS_HELP_3: 'zablokuj akcje zapisu',
  CUSTOMIZATIONS_HELP_4: 'wyklucz z MQTT i API',
  CUSTOMIZATIONS_HELP_5: 'ukryj na pulpicie',
  CUSTOMIZATIONS_HELP_6: 'usuń z pamięci',
  SELECT_DEVICE: 'wybierz urządzenie',
  SET_ALL: 'Ustaw wszystko jako',
  OPTIONS: 'Opcje',
  NAME: '{{Nazwa|nazwa|}}',
  CUSTOMIZATIONS_RESET:  'Na pewno chcesz usunąć wszystkie personalizacje łącznie z ustawieniami dla czujników temperatury 1-Wire® i urządzeń podłączonych do EMS-ESP?',
  DEVICE_ENTITIES: 'Encje urządzenia',
  SUPPORT_INFORMATION: 'Informacje dotyczące wsparcia',
  CLICK_HERE: 'Kliknij tu',
  HELP_INFORMATION_1: 'Aby uzyskać instrukcje dotyczące konfiguracji EMS-ESP skorzystaj z wiki w internecie',
  HELP_INFORMATION_2: 'Aby dołączyć do naszego serwera Discord i komunikować się na żywo ze społecznością',
  HELP_INFORMATION_3: 'Aby zaproponować nową funkcjonalność lub zgłosić problem',
  HELP_INFORMATION_4: 'Zgłaszając problem, nie zapomnij dołączyć informacji o swoim systemie!',
  HELP_INFORMATION_5: 'EMS-ESP jest darmowym projektem typu open-source. Aby go wesprzeć, rozważ przyznanie nam gwiazdki na Github!',
  SUPPORT_INFO: 'Pobierz informacje',
  UPLOAD: 'Wysyłanie',
  DOWNLOAD: '{{P|p||P}}obier{{anie|z||z}}',
  ABORTED: 'zostało przerwane!',
  FAILED: 'nie powiodł{{o|a|}} się!',
  SUCCESSFUL: 'powiodło się.',
  SYSTEM: '{{S|s||s}}yste{{m|mu||mowy}}',
  LOG_OF: 'Log {0}',
  STATUS_OF: 'Status {0}',
  UPLOAD_DOWNLOAD: 'Przesyłanie plików',
  VERSION_ON: 'Aktualnie używasz',
  SYSTEM_APPLY_FIRMWARE: '',
  CLOSE: 'Zamknij',
  USE: 'Aby zaktualizować firmware skorzystaj z funkcji',
  FACTORY_RESET: 'Ustawienia fabryczne',
  SYSTEM_FACTORY_TEXT: 'Interfejs EMS-ESP został przywrócony do ustawień fabrycznych i zostanie teraz ponownie uruchomiony.',
  SYSTEM_FACTORY_TEXT_DIALOG: 'Na pewno chcesz przywrócić ustawienia fabryczne interfejsu EMS-ESP? ',
  VERSION_CHECK: 'Sprawd{{ź|zanie|}} wersj{{ę|i|}}',
  THE_LATEST: 'Najnowsze',
  OFFICIAL: 'oficjalne',
  DEVELOPMENT: 'testowe',
  RELEASE_IS: 'wydanie to',
  RELEASE_NOTES: 'lista zmian',
  EMS_ESP_VER: 'Wersja EMS-ESP',
  PLATFORM: 'Urządzenie (platforma / SDK)',
  UPTIME: 'Czas działania systemu',
  CPU_FREQ: 'Taktowanie CPU',
  HEAP: 'HEAP (wolne / maksymalny przydział)',
  PSRAM: 'PSRAM (rozmiar / wolne)',
  FLASH: 'FLASH (rozmiar / taktowanie)',
  APPSIZE: 'Aplikacja (wykorzystane / wolne)',
  FILESYSTEM: 'System plików (wykorzystane / wolne)',
  BUFFER_SIZE: 'Maksymalna pojemność bufora (ilość wpisów)',
  COMPACT: 'Kompaktowy',
  ENABLE_OTA: 'Aktywuj aktualizację OTA',
  DOWNLOAD_CUSTOMIZATION_TEXT: 'Pobierz personalizacje.',
  DOWNLOAD_SCHEDULE_TEXT: 'Pobierz harmonogram zdarzeń.',
  DOWNLOAD_SETTINGS_TEXT: 'Pobierz ustawienia aplikacji. Uważaj jeśli udostępniasz plik z ustawieniami, ponieważ zawiera on hasła oraz inne wrażliwe informacje!',
  UPLOAD_TEXT: 'Wyślij firmware (.bin), ustawienia lub personalizacje (.json). Opcjonalnie, wyślij wcześniej plik walidacji (.md5).',
  UPLOADING: 'Wysłano',
  UPLOAD_DROP_TEXT: 'Przeciągnij tutaj plik lub kliknij',
  ERROR: 'Nieoczekiwany błąd, spróbuj ponownie!',
  TIME_SET: 'Zegar został ustawiony.',
  MANAGE_USERS: 'Zarządzanie użytkownikami',
  IS_ADMIN: '{{Administrator|Uprawnienia administratora|}}',
  USER_WARNING: 'Przynajmniej jeden użytkownik musi mieć uprawnienia administratora!',
  ADD: 'Doda{{j|wanie|}}',
  ACCESS_TOKEN_FOR: 'Token dostępu dla użytkownika',
  ACCESS_TOKEN_TEXT: 'Token jest używany w wywołaniach REST API wymagających autoryzacji. Można go przekazywać bezpośrednio lub przez URL.',
  GENERATING_TOKEN: 'Generowanie tokenu',
  USER: '{{Użytkownik|użytkownika|}}',
  MODIFY: 'Edycja',
  SU_TEXT: 'Hasło "su" (super-użytkownika) służy do podpisywania tokenów autoryzujących oraz włączania uprawnień administratora w konsoli.',
  NOT_ENABLED: 'nie aktywowano',
  ERRORS_OF: 'Błędy {0}',
  DISCONNECT_REASON: 'Przyczyna braku połączenia',
  ENABLE_MQTT: 'Aktywuj MQTT',
  BROKER: 'brokera',
  CLIENT: 'klienta',
  BASE_TOPIC: 'Prefiks bazowy (unikalny!)',
  OPTIONAL: 'opcjonalny',
  FORMATTING: 'Formatowanie',
  MQTT_FORMAT: 'Sposób publikowania danych',
  MQTT_NEST_1: 'zagnieżdżone w jednym temacie',
  MQTT_NEST_2: 'jako oddzielne tematy',
  MQTT_RESPONSE: 'Rezultat wykonania komendy publikuj w temacie "response"',
  MQTT_PUBLISH_TEXT_1: 'Tematy z pojedynczą wartością publikuj po jej zmianie',
  MQTT_PUBLISH_TEXT_2: 'Publikuj w tematach "command" (ioBroker)',
  MQTT_PUBLISH_TEXT_3: 'Włącz opcję "MQTT discovery"',
  MQTT_PUBLISH_TEXT_4: 'Prefiks dla "MQTT discovery"',
  MQTT_PUBLISH_TEXT_5: 'Typ "MQTT discovery"',
  MQTT_PUBLISH_INTERVALS: 'Interwały publikowania',
  MQTT_INT_BOILER: 'Kotły i pompy ciepła',
  MQTT_INT_THERMOSTATS: 'Termostaty',
  MQTT_INT_SOLAR: 'Panele solarne',
  MQTT_INT_MIXER: 'Mieszacze',
  MQTT_INT_HEARTBEAT: '"Heartbeat" (aktywność)',
  MQTT_QUEUE: 'Kolejka MQTT',
  DEFAULT: '{{Pozostałe|Domyślna|}}',
  MQTT_ENTITY_FORMAT: 'Format "Entity ID"',
  MQTT_ENTITY_FORMAT_0: 'długa nazwa (jak w v3.4)',
  MQTT_ENTITY_FORMAT_1: 'krótka nazwa',
  MQTT_ENTITY_FORMAT_2: 'prefiks bazowy + krótka nazwa',
  MQTT_CLEAN_SESSION: 'Ustawiaj flagę "Clean session"',
  MQTT_RETAIN_FLAG: 'Ustawiaj flagę "Retain"',
  INACTIVE: 'nieaktywn{{y|a|}}',
  ACTIVE: 'aktywny',
  UNKNOWN: 'nieznany',
  SET_TIME: '{{Ustaw zegar|Ustawianie zegara|}}',
  SET_TIME_TEXT: 'Wprowadź aktualną datę i godzinę',
  LOCAL_TIME: 'Czas lokalny',
  UTC_TIME: 'Czas UTC',
  ENABLE_NTP: 'Aktywuj NTP (data i godzina będą automatycznie synchronizowane z poniższym serwerem czasu)',
  NTP_SERVER: 'Serwer NTP',
  TIME_ZONE: 'Strefa czasowa',
  ACCESS_POINT: '{{Punkt|punktu|}} {{dostępowy|dostępowego|}}',
  AP_PROVIDE: 'Punkt dostępowy',
  AP_PROVIDE_TEXT_1: 'zawsze aktywny',
  AP_PROVIDE_TEXT_2: 'aktywny jeśli brak połączenia z siecią',
  AP_PROVIDE_TEXT_3: 'nieaktywny',
  AP_PREFERRED_CHANNEL: 'Preferowany kanał',
  AP_HIDE_SSID: 'Ukryj SSID',
  AP_CLIENTS: 'Liczba klientów',
  AP_MAX_CLIENTS: 'Maksymalna liczba klientów',
  AP_LOCAL_IP: 'Lokalny adres IP',
  NETWORK_SCAN: 'Skanowanie sieci WiFi',
  IDLE: 'bezczynna',
  LOST: 'zostało utracone.',
  SCANNING: 'Skanuję',
  SCAN_AGAIN: 'Skanuj ponownie',
  NETWORK_SCANNER: 'Skaner sieci WiFi',
  NETWORK_NO_WIFI: 'Brak sieci WiFi w zasięgu',
  NETWORK_BLANK_SSID: 'pozostaw puste aby wyłączyć WiFi',
  TX_POWER: 'Moc nadawania',
  HOSTNAME: 'Nazwa w sieci',
  NETWORK_DISABLE_SLEEP: 'Wyłącz tryb uśpienia WiFi',
  NETWORK_LOW_BAND: 'Używaj mniejszej szerokości pasma WiFi (20MHz)',
  NETWORK_USE_DNS: 'Włącz wsparcie dla mDNS',
  NETWORK_ENABLE_CORS: 'Włącz wsparcie dla CORS',
  NETWORK_CORS_ORIGIN: 'CORS origin',
  NETWORK_ENABLE_IPV6: 'Włącz wsparcie dla IPv6',
  NETWORK_FIXED_IP: 'Użyj stałego adresu IP',
  NETWORK_GATEWAY: 'Brama',
  NETWORK_SUBNET: 'Maska podsieci',
  NETWORK_DNS: 'Serwery DNS',
  ADDRESS_OF: 'Adres {0}',
  ADMIN: 'Użytkownik "administrator".',
  GUEST: 'Użytkownik "gość".',
  NEW: 'nowe{{go|j|}}',
  NEW_NAME_OF: 'Nowa nazwa {0}',
  ENTITY: 'encji',
  MIN: 'Min.',
  MAX: 'Maks.',
  BLOCK_NAVIGATE_1: 'Niezapisane zmiany!',
  BLOCK_NAVIGATE_2: 'Jeśli przejdziesz do innej strony, wprowadzone zmiany w ustawieniach zostaną utracone. Na pewno chcesz opuścić tę stronę?',
  STAY: 'Pozostań',
  LEAVE: 'Opuść',
  SCHEDULER: 'Harmonogram',
  SCHEDULER_HELP_1: 'Zautomatyzuj wykonywanie komend, dodając poniżej harmonogram zdarzeń. Nadaj mu unikalną nazwę, aby móc go aktywować/dezaktywować przez API/MQTT.',
  SCHEDULER_HELP_2: 'Wpisz 00:00 aby wykonywać jednorazowo przy starcie.',
  SCHEDULE: '{{H|h|}}armonogram{{|u|}}',
  TIME: '{{Czas|Godzina|}}',
  TIMER: '{{m|M|}}inutnik',
  SCHEDULE_UPDATED: 'Harmonogram został uaktualniony.',
  SCHEDULE_TIMER_1: 'przy starcie',
  SCHEDULE_TIMER_2: 'co minutę',
  SCHEDULE_TIMER_3: 'co godzinę',
  CUSTOM_ENTITIES: '{{N|n|}}iestandardowe{{|j|}} encj{{e|i|}}',
  ENTITIES_HELP_1: 'Zdefiniuj niestandardowe encje dla magistrali EMS.',
  ENTITIES_UPDATED: 'Niestandardowe encje zostały uaktualnione.',
  WRITEABLE: 'zapisywalna',
  SHOWING: 'Wyświetlane',
  SEARCH: 'Szukaj'

};

export default pl;
