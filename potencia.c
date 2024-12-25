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
