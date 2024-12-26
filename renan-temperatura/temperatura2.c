#include "temperatura.h"

// Converte Celsius para Fahrenheit
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Converte Celsius para Kelvin
float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

// Converte Fahrenheit para Celsius
float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Converte Kelvin para Celsius
float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

// Converte Fahrenheit para Kelvin
float fahrenheit_para_kelvin(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Converte Kelvin para Fahrenheit
float kelvin_para_fahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}
