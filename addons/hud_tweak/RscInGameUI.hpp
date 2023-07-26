class RscInGameUI {
    // controls[] = {"WeaponInfoControlsGroupRight","","","","","","","",""};
    class RscUnitInfo;
    class RscUnitInfoTank_SPE: RscUnitInfo {
        class CA_Heading: RscText {
            x = QUOTE(3.84 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(0.15 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_Speed: RscText {
            x = QUOTE(4.5 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(9.4 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_SpeedUnits: RscText {
            x = QUOTE(4.4 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(10 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
    };

    class RscUnitInfoAir_SPE: RscUnitInfo {
        class CA_Alt: RscText {
            x = QUOTE(4 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(10.75 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_AltUnits: RscText {
            x = QUOTE(4.4 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(11.25 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_Heading: RscText {
            x = QUOTE(4.5 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(0.15 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_Speed: RscText {
            x = QUOTE(4.5 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(9.4 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_SpeedUnits: RscText {
            x = QUOTE(4.4 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(10 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
        class CA_VehicleToggles: RscVehicleToggles {
            x = QUOTE(1.27 * GUI_GRID_W + SPE_VEHICLE_X);
            y = QUOTE(11 * GUI_GRID_H + SPE_VEHICLE_Y);
        };
    };
};
