#include "volume.h" // Inclusão do cabeçalho para as funções de conversão de volume

// Função para converter litros para mililitros
float litro_para_mililitro(float litro) {
    return litro * 1000.0; // Retorna o valor em mililitros
}

// Função para converter mililitros para litros
float mililitro_para_litro(float mililitro) {
    return mililitro / 1000.0; // Retorna o valor em litros
}

// Função para converter litros para metros cúbicos
float litro_para_metro_cubico(float litro) {
    return litro / 1000.0; // Retorna o valor em metros cúbicos
}

// Função para converter metros cúbicos para litros
float metro_cubico_para_litro(float metro_cubico) {
    return metro_cubico * 1000.0; // Retorna o valor em litros
}

// Função para converter mililitros para metros cúbicos
float mililitro_para_metro_cubico(float mililitro) {
    return mililitro / 1000000.0; // Retorna o valor em metros cúbicos
}

// Função para converter metros cúbicos para mililitros
float metro_cubico_para_mililitro(float metro_cubico) {
    return metro_cubico * 1000000.0; // Retorna o valor em mililitros
}