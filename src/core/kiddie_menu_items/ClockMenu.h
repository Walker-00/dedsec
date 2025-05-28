#ifndef __KIDDIE_CLOCK_MENU_H__
#define __KIDDIE_CLOCK_MENU_H__

#include <MenuItemInterface.h>

class KiddieClockMenu : public MenuItemInterface {
public:
    KiddieClockMenu() : MenuItemInterface("Clock") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.clock; }
};

#endif
