#include "GpsMenu.h"
#include "core/display.h"
#include "core/settings.h"
#include "core/utils.h"
#include "modules/gps/gps_tracker.h"
#include "modules/gps/wardriving.h"
#include <math.h>

void KiddieGpsMenu::optionsMenu() {
    options = {
        {"Wardriving",  [=]() { Wardriving(); }},
        {"GPS Tracker", [=]() { GPSTracker(); }},
        {"Config",      [=]() { configMenu(); }},
    };
    addOptionToMainMenu();

    String txt = "GPS (" + String(bruceConfig.gpsBaudrate) + " bps)";
    loopOptions(options, MENU_TYPE_SUBMENU, txt.c_str());
}

void KiddieGpsMenu::configMenu() {
    options = {
        {"Baudrate", setGpsBaudrateMenu      },
        {"Back",     [=]() { optionsMenu(); }},
    };

    loopOptions(options, MENU_TYPE_SUBMENU, "GPS Config");
}
void KiddieGpsMenu::drawIconImg() {
    drawImg(
        *bruceConfig.themeFS(), bruceConfig.getThemeItemImg(bruceConfig.theme.paths.gps), 0, imgCenterY, true
    );
}
void KiddieGpsMenu::drawIcon(float scale) {
    clearIconArea();
    int radius = scale * 18;
    if (radius % 2 != 0) radius++;

    int tangentX = sqrt(radius * radius - (radius / 2 * radius / 2));
    int32_t tangentY = radius / 2;

    tft.fillCircle(iconCenterX, iconCenterY - radius / 2, radius, bruceConfig.priColor);
    tft.fillTriangle(
        iconCenterX - tangentX,
        iconCenterY - radius / 2 + tangentY,
        iconCenterX + tangentX,
        iconCenterY - radius / 2 + tangentY,
        iconCenterX,
        iconCenterY + 1.5 * radius,
        bruceConfig.priColor
    );
    tft.fillCircle(iconCenterX, iconCenterY - radius / 2, radius / 2, bruceConfig.bgColor);

    tft.drawEllipse(iconCenterX, iconCenterY + 1.5 * radius, 1.5 * radius, radius / 2, bruceConfig.priColor);
}
