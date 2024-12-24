#include "potencia.h"

float un_pot(float a) //converte de watts para hp
{
    float s;
    s = a/746;
    return s;
}