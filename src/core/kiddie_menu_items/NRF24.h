#ifndef __KIDDIE_NRF24_MENU_H__
#define __KIDDIE_NRF24_MENU_H__

#include <MenuItemInterface.h>

class KiddieNRF24Menu : public MenuItemInterface {
public:
    KiddieNRF24Menu() : MenuItemInterface("NRF24") {}

    void optionsMenu(void);
    void configMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.nrf; }
};

#endif
