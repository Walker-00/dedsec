#ifndef __KIDDIE_CONNECT_MENU_H__
#define __KIDDIE_CONNECT_MENU_H__

#include <MenuItemInterface.h>

class KiddieConnectMenu : public MenuItemInterface {
public:
    KiddieConnectMenu() : MenuItemInterface("Connect") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.connect; }
};

#endif
