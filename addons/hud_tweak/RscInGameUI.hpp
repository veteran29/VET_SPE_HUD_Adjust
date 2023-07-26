class RscInGameUI {
    // controls[] = {"WeaponInfoControlsGroupRight","","","","","","","",""};
    class RscUnitInfo;
    class RscUnitInfoTank_SPE: RscUnitInfo {
        class CA_Speed: RscText {
            x = QUOTE(4.5 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(9.4 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_SpeedUnits: RscText {
            x = QUOTE(4.4 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(10 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_Heading: RscText {
            x = QUOTE(3.84 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(0.15 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
    };
};
