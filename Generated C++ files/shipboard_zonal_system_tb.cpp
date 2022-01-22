
#include "shipboard_zonal_system.hpp"

int main(void){

    float x_out_p[56];
    float cp_voltage_dcdc1_p = 0.0f;
    float cn_voltage_dcdc1_p = 0.0f;
    float la_current_dcdc1_p = 0.0f;
    float lb_current_dcdc1_p = 0.0f;
    float lc_current_dcdc1_p = 0.0f;
    float cp_voltage_dcdc2_p = 0.0f;
    float cn_voltage_dcdc2_p = 0.0f;
    float la_current_dcdc2_p = 0.0f;
    float lb_current_dcdc2_p = 0.0f;
    float lc_current_dcdc2_p = 0.0f;
    float l_current_cable_l01_p = 0.0f;
    float l_current_cable_l02_p = 0.0f;
    float l_current_cable_l03_p = 0.0f;
    float l_current_cable_l04_p = 0.0f;
    float l_current_cable_l05_p = 0.0f;
    float l_current_cable_l06_p = 0.0f;
    float l_current_cable_l07_p = 0.0f;
    float l_current_cable_l08_p = 0.0f;
    float l_current_cable_l09_p = 0.0f;
    float l_current_cable_l10_p = 0.0f;
    float l_current_cable_l11_p = 0.0f;
    float l_current_cable_l12_p = 0.0f;
    float l_current_cable_l13_p = 0.0f;
    float l_current_cable_l14_p = 0.0f;
    float l_current_cable_l15_p = 0.0f;
    float l_current_cable_l16_p = 0.0f;
    float cp_voltage_inv1_p = 0.0f;
    float cn_voltage_inv1_p = 0.0f;
    float la_current_inv1_p = 0.0f;
    float lb_current_inv1_p = 0.0f;
    float lc_current_inv1_p = 0.0f;
    float cp_voltage_inv2_p = 0.0f;
    float cn_voltage_inv2_p = 0.0f;
    float la_current_inv2_p = 0.0f;
    float lb_current_inv2_p = 0.0f;
    float lc_current_inv2_p = 0.0f;
    float cp_voltage_inv3_p = 0.0f;
    float cn_voltage_inv3_p = 0.0f;
    float la_current_inv3_p = 0.0f;
    float lb_current_inv3_p = 0.0f;
    float lc_current_inv3_p = 0.0f;
    float cp_voltage_inv4_p = 0.0f;
    float cn_voltage_inv4_p = 0.0f;
    float la_current_inv4_p = 0.0f;
    float lb_current_inv4_p = 0.0f;
    float lc_current_inv4_p = 0.0f;
    float cp_voltage_inv5_p = 0.0f;
    float cn_voltage_inv5_p = 0.0f;
    float la_current_inv5_p = 0.0f;
    float lb_current_inv5_p = 0.0f;
    float lc_current_inv5_p = 0.0f;
    float cp_voltage_inv6_p = 0.0f;
    float cn_voltage_inv6_p = 0.0f;
    float la_current_inv6_p = 0.0f;
    float lb_current_inv6_p = 0.0f;
    float lc_current_inv6_p = 0.0f;
    bool sw_ctrl_dcdc1_p[3] = {true, true, true};
    bool sw_en_dcdc1_p = true;
    bool sw_ctrl_dcdc2_p[3] = {true, true, true};
    bool sw_en_dcdc2_p = true;
    bool sw_ctrl_inv1_p[3] = {true, true, true};
    bool sw_en_inv1_p = true;
    bool sw_ctrl_inv2_p[3] = {true, true, true};
    bool sw_en_inv2_p = true;
    bool sw_ctrl_inv3_p[3] = {true, true, true};
    bool sw_en_inv3_p = true;
    bool sw_ctrl_inv4_p[3] = {true, true, true};
    bool sw_en_inv4_p = true;
    bool sw_ctrl_inv5_p[3] = {true, true, true};
    bool sw_en_inv5_p = true;
    bool sw_ctrl_inv6_p[3] = {true, true, true};
    bool sw_en_inv6_p = true;

    shipboard_zonal_system_solver (
x_out_p,
&cp_voltage_dcdc1_p,
&cn_voltage_dcdc1_p,
&la_current_dcdc1_p,
&lb_current_dcdc1_p,
&lc_current_dcdc1_p,
&cp_voltage_dcdc2_p,
&cn_voltage_dcdc2_p,
&la_current_dcdc2_p,
&lb_current_dcdc2_p,
&lc_current_dcdc2_p,
&l_current_cable_l01_p,
&l_current_cable_l02_p,
&l_current_cable_l03_p,
&l_current_cable_l04_p,
&l_current_cable_l05_p,
&l_current_cable_l06_p,
&l_current_cable_l07_p,
&l_current_cable_l08_p,
&l_current_cable_l09_p,
&l_current_cable_l10_p,
&l_current_cable_l11_p,
&l_current_cable_l12_p,
&l_current_cable_l13_p,
&l_current_cable_l14_p,
&l_current_cable_l15_p,
&l_current_cable_l16_p,
&cp_voltage_inv1_p,
&cn_voltage_inv1_p,
&la_current_inv1_p,
&lb_current_inv1_p,
&lc_current_inv1_p,
&cp_voltage_inv2_p,
&cn_voltage_inv2_p,
&la_current_inv2_p,
&lb_current_inv2_p,
&lc_current_inv2_p,
&cp_voltage_inv3_p,
&cn_voltage_inv3_p,
&la_current_inv3_p,
&lb_current_inv3_p,
&lc_current_inv3_p,
&cp_voltage_inv4_p,
&cn_voltage_inv4_p,
&la_current_inv4_p,
&lb_current_inv4_p,
&lc_current_inv4_p,
&cp_voltage_inv5_p,
&cn_voltage_inv5_p,
&la_current_inv5_p,
&lb_current_inv5_p,
&lc_current_inv5_p,
&cp_voltage_inv6_p,
&cn_voltage_inv6_p,
&la_current_inv6_p,
&lb_current_inv6_p,
&lc_current_inv6_p,
sw_ctrl_dcdc1_p,
sw_en_dcdc1_p,
sw_ctrl_dcdc2_p,
sw_en_dcdc2_p,
sw_ctrl_inv1_p,
sw_en_inv1_p,
sw_ctrl_inv2_p,
sw_en_inv2_p,
sw_ctrl_inv3_p,
sw_en_inv3_p,
sw_ctrl_inv4_p,
sw_en_inv4_p,
sw_ctrl_inv5_p,
sw_en_inv5_p,
sw_ctrl_inv6_p,
sw_en_inv6_p
);

    return 0;
}

