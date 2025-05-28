#ifndef __KIDDIE_RF_MENU_H__
#define __KIDDIE_RF_MENU_H__

#include <MenuItemInterface.h>

class KiddieRFMenu : public MenuItemInterface {
public:
    KiddieRFMenu() : MenuItemInterface("RF") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.rf; }

private:
    void configMenu(void);
};

#endif
