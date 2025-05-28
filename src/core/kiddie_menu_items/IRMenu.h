#ifndef __KIDDIE_IR_MENU_H__
#define __KIDDIE_IR_MENU_H__

#include <MenuItemInterface.h>

class KiddieIRMenu : public MenuItemInterface {
public:
    KiddieIRMenu() : MenuItemInterface("IR") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.ir; }

private:
    void configMenu(void);
};

#endif
