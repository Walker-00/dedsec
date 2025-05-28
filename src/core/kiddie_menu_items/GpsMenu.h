#ifndef __KIDDIE_GPS_MENU_H__
#define __KIDDIE_GPS_MENU_H__

#include <MenuItemInterface.h>

class KiddieGpsMenu : public MenuItemInterface {
public:
    KiddieGpsMenu() : MenuItemInterface("GPS") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.gps; }

private:
    void configMenu(void);
};

#endif
