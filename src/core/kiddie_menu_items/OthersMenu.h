#ifndef __KIDDIE_OTHERS_MENU_H__
#define __KIDDIE_OTHERS_MENU_H__

#include <MenuItemInterface.h>

class KiddieOthersMenu : public MenuItemInterface {
public:
    KiddieOthersMenu() : MenuItemInterface("Others") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.others; }
};

#endif
