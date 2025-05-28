#ifndef __CONFIG_MENU_H__
#define __CONFIG_MENU_H__

#include <MenuItemInterface.h>

class KiddieConfigMenu : public MenuItemInterface {
public:
    KiddieConfigMenu() : MenuItemInterface("Config") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.config; }

private:
    void devMenu(void);
};

#endif
