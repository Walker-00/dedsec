#ifndef __KIDDIE_SCRIPTS_MENU_H__
#define __KIDDIE_SCRIPTS_MENU_H__

#include <MenuItemInterface.h>

class KiddieScriptsMenu : public MenuItemInterface {
public:
    KiddieScriptsMenu() : MenuItemInterface("JS Interpreter") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.interpreter; }
};

#endif
