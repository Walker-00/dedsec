#ifndef __FILE_MENU_H__
#define __FILE_MENU_H__

#include <MenuItemInterface.h>

class KiddieFileMenu : public MenuItemInterface {
public:
    KiddieFileMenu() : MenuItemInterface("Files") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.files; }
};

#endif
