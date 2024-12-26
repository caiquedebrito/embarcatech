#include "area.h"

// Função para converter metros quadrados para centímetros quadrados
float metrosQuadradosParaCentimetrosQuadrados(float metros) {
    return metros * 10000;  
}

// Função para converter metros quadrados para milímetros quadrados
float metrosQuadradosParaMilimetrosQuadrados(float metros) {
    return metros * 1000000;  
}

// Função para converter centímetros quadrados para metros quadrados
float centimetrosQuadradosParaMetrosQuadrados(float centimetros) {
    return centimetros / 10000; 
}

// Função para converter centímetros quadrados para milímetros quadrados
float centimetrosQuadradosParaMilimetrosQuadrados(float centimetros) {
    return centimetros * 100;
}

// Função para converter milímetros quadrados para metros quadrados
float milimetrosQuadradosParaMetrosQuadrados(float milimetros) {
    return milimetros / 1000000;
}

// Função para converter milímetros quadrados para centímetros quadrados
float milimetrosQuadradosParaCentimetrosQuadrados(float milimetros) {
    return milimetros / 100; 
}