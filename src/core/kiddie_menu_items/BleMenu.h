#ifndef __KIDDIE_BLE_MENU_H__
#define __KIDDIE_BLE_MENU_H__

#include <MenuItemInterface.h>

class KiddieBleMenu : public MenuItemInterface {
public:
    KiddieBleMenu() : MenuItemInterface("BLE") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.ble; }
};

#endif
