#include "IRMenu.h"
#include "core/display.h"
#include "core/settings.h"
#include "core/utils.h"
#include "modules/ir/TV-B-Gone.h"
#include "modules/ir/ir_jammer.h"
#include "modules/ir/custom_ir.h"
#include "modules/ir/ir_read.h"

void KiddieIRMenu::optionsMenu() {
    options = {
        {"TV-B-Gone", StartTvBGone           },
        {"Custom IR", otherIRcodes           },
        {"IR Read",   [=]() { IrRead(); }    },
        {"IR Jammer", startIrJammer          }, // Simple frequency-adjustable jammer
        {"Config",    [=]() { configMenu(); }},
    };
    addOptionToMainMenu();

    String txt = "Infrared";
    txt += " Tx: " + String(bruceConfig.irTx) + " Rx: " + String(bruceConfig.irRx) +
           " Rpts: " + String(bruceConfig.irTxRepeats);
    loopOptions(options, MENU_TYPE_SUBMENU, txt.c_str());
}

void KiddieIRMenu::configMenu() {
    options = {
        {"Ir TX Pin", lambdaHelper(gsetIrTxPin, true)},
        {"Ir RX Pin", lambdaHelper(gsetIrRxPin, true)},
        {"Ir TX Repeats", setIrTxRepeats},
        {"Back", [=]() { optionsMenu(); }},
    };

    loopOptions(options, MENU_TYPE_SUBMENU, "IR Config");
}
void KiddieIRMenu::drawIconImg() {
    drawImg(
        *bruceConfig.themeFS(), bruceConfig.getThemeItemImg(bruceConfig.theme.paths.ir), 0, imgCenterY, true
    );
}
void KiddieIRMenu::drawIcon(float scale) {
    clearIconArea();
    int iconSize = scale * 60;
    int radius = scale * 7;
    int deltaRadius = scale * 10;

    if (iconSize % 2 != 0) iconSize++;

    tft.fillRect(
        iconCenterX - iconSize / 2, iconCenterY - iconSize / 2, iconSize / 6, iconSize, bruceConfig.priColor
    );
    tft.fillRect(
        iconCenterX - iconSize / 3,
        iconCenterY - iconSize / 3,
        iconSize / 6,
        2 * iconSize / 3,
        bruceConfig.priColor
    );

    tft.drawCircle(iconCenterX - iconSize / 6, iconCenterY, radius, bruceConfig.priColor);

    tft.drawArc(
        iconCenterX - iconSize / 6,
        iconCenterY,
        2.5 * radius,
        2 * radius,
        220,
        320,
        bruceConfig.priColor,
        bruceConfig.bgColor
    );
    tft.drawArc(
        iconCenterX - iconSize / 6,
        iconCenterY,
        2.5 * radius + deltaRadius,
        2 * radius + deltaRadius,
        220,
        320,
        bruceConfig.priColor,
        bruceConfig.bgColor
    );
    tft.drawArc(
        iconCenterX - iconSize / 6,
        iconCenterY,
        2.5 * radius + 2 * deltaRadius,
        2 * radius + 2 * deltaRadius,
        220,
        320,
        bruceConfig.priColor,
        bruceConfig.bgColor
    );
}
