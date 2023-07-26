
class CfgVehicles {
    class All;
    class AllVehicles: All {
        class SPE_Veh_HudLayers {
            class Background {
                x = QUOTE(0 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(0 * GUI_GRID_H + SPE_VEHICLE_Y);
            };

            class Fuel_Arrow;
            class Commander_View: Fuel_Arrow {
                x = QUOTE(0 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(0 * GUI_GRID_H + SPE_VEHICLE_Y);
            };

            class Light_Status: Background {
                x = QUOTE(7.35 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(11 * GUI_GRID_H + SPE_VEHICLE_Y);
            };

            class Vehicle {
                class SPE_Veh_HudLayers {
                    class ltrack: Background {
                        x = QUOTE(1.85 * GUI_GRID_W + SPE_VEHICLE_X);
                        y = QUOTE(1.85 * GUI_GRID_H + SPE_VEHICLE_Y);
                    };
                };
            };
        };
    };

    class Air: AllVehicles {};
    class Plane: Air {};
    class Plane_Base_F: Plane {};
    class SPE_Plane_base: Plane_Base_F {
        class SPE_Veh_HudLayers: SPE_Veh_HudLayers {
            class Background;
            class CollisionLight_Status: Background {
                x = QUOTE(8.68 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(11 * GUI_GRID_H + SPE_VEHICLE_Y);
            };
            class Extended_Air: Background {
                x = QUOTE(0 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(10.65 * GUI_GRID_H + SPE_VEHICLE_Y);
            };
            class Light_Status: Background {
                x = QUOTE(7.35 * GUI_GRID_W + SPE_VEHICLE_X);
                y = QUOTE(11 * GUI_GRID_H + SPE_VEHICLE_Y);
            };
        };
    };
};
