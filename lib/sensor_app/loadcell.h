#ifndef LOADCELL_H
#define LOADCELL_H



typedef struct LOADCELL_t{
    uint16_t    volume;
    uint16_t    mass;
    uint16_t    scale_value;
    float       calib_value;    
    int         (*loadcell_get_mass)();
    bool        is_calibrated; 
}LOADCELL;

void loadcell_init();
void loadcell_tare();
void loadcell_calib();
void loadcell_recalib();
int loadcell_get_mass_handle();

#endif