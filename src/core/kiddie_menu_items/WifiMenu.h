#ifndef __WIFI_MENU_H__
#define __WIFI_MENU_H__

#include <MenuItemInterface.h>

class KiddieWifiMenu : public MenuItemInterface {
public:
    KiddieWifiMenu() : MenuItemInterface("WiFi") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.wifi; }

private:
    void configMenu(void);
};

#endif
