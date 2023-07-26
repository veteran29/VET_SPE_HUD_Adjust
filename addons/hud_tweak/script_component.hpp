#define COMPONENT hud_tweak
#define COMPONENT_BEAUTIFIED HUD_Tweak
#include "\z\vetspetua\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL

#include "\z\vetspetua\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineCommonGrids.inc"

#define SPE_VEHICLE_X_DEF (safezoneX + 0.5 * GUI_GRID_W)
#define SPE_VEHICLE_Y_DEF (safezoneY + 0.5 * GUI_GRID_H)

#define SPE_VEHICLE_X (profileNamespace getVariable ['IGUI_SPE_VEHICLE_X', SPE_VEHICLE_X_DEF])
#define SPE_VEHICLE_Y (profileNamespace getVariable ['IGUI_SPE_VEHICLE_Y', SPE_VEHICLE_Y_DEF])
