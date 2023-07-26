#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "vetspetua_main",
            "WW2_SPE_Core_c_UI_Gui_c",
            "WW2_SPE_Assets_c_Vehicles_Extended_HUD_c"
        };
        authors[] = {"veteran29"};
        author = "veteran29";
        VERSION_CONFIG;
    };
};

class RscText;

#include "CfgUIGrids.hpp"
#include "CfgVehicles.hpp"
#include "RscInGameUI.hpp"
