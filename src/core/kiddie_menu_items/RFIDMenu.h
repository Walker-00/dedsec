#ifndef __KIDDIE_RFID_MENU_H__
#define __KIDDIE_RFID_MENU_H__

#include <MenuItemInterface.h>

class KiddieRFIDMenu : public MenuItemInterface {
public:
    KiddieRFIDMenu() : MenuItemInterface("RFID") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.rfid; }

private:
    void configMenu(void);
};

#endif
