#include "potencia.h"

float watt_para_hp(float watt) //converte de watts para hp
{
    return watt/746;
}

float watt_para_kw(float watt)//converte de watts para quilowatts
{
    return watt/1000;
}

float watt_para_cv(float watt)//converte de watts para cv(cavalo-vapor)
{
    return watt/736
}

float hp_para_watt(float hp) // converte de hp para watts
{
    return hp * 746;
}

float kw_para_watt(float kw) // converte de quilowatts para watts
{   
    return kw * 1000;
}

float cv_para_watt(float cv) // converte de cv para watts
{    
    return cv * 736;
}
