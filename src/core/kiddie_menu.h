#ifndef __KIDDIE_MENU_H__
#define __KIDDIE_MENU_H__

#include <MenuItemInterface.h>

#include "kiddie_menu_items/BleMenu.h"
#include "kiddie_menu_items/ClockMenu.h"
#include "kiddie_menu_items/ConfigMenu.h"
#include "kiddie_menu_items/ConnectMenu.h"
// #include "menu_items/FMMenu.h"
#include "kiddie_menu_items/FileMenu.h"
#include "kiddie_menu_items/GpsMenu.h"
#include "kiddie_menu_items/IRMenu.h"
#include "kiddie_menu_items/NRF24.h"
#include "kiddie_menu_items/OthersMenu.h"
#include "kiddie_menu_items/RFIDMenu.h"
#include "kiddie_menu_items/RFMenu.h"
#include "kiddie_menu_items/ScriptsMenu.h"
#include "kiddie_menu_items/WifiMenu.h"

class KiddieMenu {
public:
    KiddieFileMenu fileMenu;
    KiddieBleMenu bleMenu;
    KiddieClockMenu clockMenu;
    KiddieConnectMenu connectMenu;
    KiddieConfigMenu configMenu;
    // FMMenu fmMenu;
    KiddieGpsMenu gpsMenu;
    KiddieIRMenu irMenu;
    KiddieNRF24Menu nrf24Menu;
    KiddieOthersMenu othersMenu;
    KiddieRFIDMenu rfidMenu;
    KiddieRFMenu rfMenu;
    KiddieScriptsMenu scriptsMenu;
    KiddieWifiMenu wifiMenu;

    KiddieMenu();
    ~KiddieMenu();

    void begin(void);

private:
    int _currentIndex = 0;
    int _totalItems = 0;
    std::vector<MenuItemInterface *> _menuItems;
};

#endif
