
class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    spe_vehicle[] = {
                        {
                            QUOTE(SPE_VEHICLE_X_DEF),
                            QUOTE(SPE_VEHICLE_Y_DEF),
                            QUOTE(10 * GUI_GRID_W),
                            QUOTE(10 * GUI_GRID_H)
                        },
                        QUOTE(GUI_GRID_W),
                        QUOTE(GUI_GRID_H)
                    };
                };
            };
        };

        class Variables {
            class spe_vehicle {
                description = "Vehicle status displayed for Spearhead 1944 tanks.";
                displayName = "Spearhead 1944 tank info";
                preview = QPATHTOF(data\spe_vehicle_ca.paa);
                saveToProfile[] = {0,1};
            };
        };
    };
};
