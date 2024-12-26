#include <stdio.h>
#include <stdlib.h>
#include "massa/massa.h"
#include "comprimento/comprimento.h"
#include "volume/volume.h"
#include "potencia/potencia.h"
#include "area/area.h"
#include "renan-temperatura/temperatura.h"

void menu_massa();
void menu_comprimento();
void menu_volume();
void menu_potencia();
void menu_area();
void menu_temperatura();

int main() {
    int opcao;

    do {
        system("clear || cls");
        printf("MENU PRINCIPAL\n");
        printf("1. Conversões de Massa\n");
        printf("2. Conversões de Comprimento\n");
        printf("3. Conversões de Volume\n");
        printf("4. Conversões de Potencia\n");
        printf("5. Conversões de Area\n");
        printf("6. Conversões de Temperatura\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menu_massa();
                break;
            case 2:
                menu_comprimento();
                break;
            case 3:
                menu_volume();
                break;
            case 4:
                menu_potencia();
                break;
            case 5:
                menu_area();
                break;
            case 6:
                menu_temperatura();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}

void menu_massa() {
    int opcao;
    float valor, resultado;

    do {
        system("clear || cls");
        printf("MENU MASSA\n");
        printf("1. Quilograma para Grama\n");
        printf("2. Grama para Quilograma\n");
        printf("3. Quilograma para Tonelada\n");
        printf("4. Tonelada para Quilograma\n");
        printf("5. Grama para Tonelada\n");
        printf("6. Tonelada para Grama\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: resultado = quilograma_para_grama(valor); break;
            case 2: resultado = grama_para_quilograma(valor); break;
            case 3: resultado = quilograma_para_tonelada(valor); break;
            case 4: resultado = tonelada_para_quilograma(valor); break;
            case 5: resultado = grama_para_tonelada(valor); break;
            case 6: resultado = tonelada_para_grama(valor); break;
            default: printf("Opção inválida!\n"); continue;
        }

        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar(); getchar();
    } while (opcao != 0);
}

void menu_comprimento() {
    int opcao;
    float valor, resultado;

    do {
        system("clear || cls");
        printf("MENU COMPRIMENTO\n");
        printf("1. Metro para Centímetro\n");
        printf("2. Metro para Milímetro\n");
        printf("3. Centímetro para Metro\n");
        printf("4. Centímetro para Milímetro\n");
        printf("5. Milímetro para Metro\n");
        printf("6. Milímetro para Centímetro\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: resultado = metro_para_centimetro(valor); break;
            case 2: resultado = metro_para_milimetro(valor); break;
            case 3: resultado = centimetro_para_metro(valor); break;
            case 4: resultado = centimetro_para_milimetro(valor); break;
            case 5: resultado = milimetro_para_metro(valor); break;
            case 6: resultado = milimetro_para_centimetro(valor); break;
            default: printf("Opção inválida!\n"); continue;
        }

        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar(); getchar();
    } while (opcao != 0);
}

void menu_volume() {
    int opcao;
    float valor, resultado;

    do {
        system("clear || cls");
        printf("MENU VOLUME\n");
        printf("1. Litro para Mililitro\n");
        printf("2. Mililitro para Litro\n");
        printf("3. Litro para Metro Cúbico\n");
        printf("4. Metro Cúbico para Litro\n");
        printf("5. Mililitro para Metro Cúbico\n");
        printf("6. Metro Cúbico para Mililitro\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: resultado = litro_para_mililitro(valor); break;
            case 2: resultado = mililitro_para_litro(valor); break;
            case 3: resultado = litro_para_metro_cubico(valor); break;
            case 4: resultado = metro_cubico_para_litro(valor); break;
            case 5: resultado = mililitro_para_metro_cubico(valor); break;
            case 6: resultado = metro_cubico_para_mililitro(valor); break;
            default: printf("Opção inválida!\n"); continue;
        }

        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar(); getchar();
    } while (opcao != 0);
}

void menu_potencia() {
    int opcao;
    float valor, resultado;

    do {
        system("clear || cls");
        printf("MENU POTÊNCIA\n");
        printf("1. Watt para HP\n");
        printf("2. Watt para kW\n");
        printf("3. Watt para CV\n");
        printf("4. HP para Watt\n");
        printf("5. kW para Watt\n");
        printf("6. CV para Watt\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: resultado = watt_para_hp(valor); break;
            case 2: resultado = watt_para_kw(valor); break;
            case 3: resultado = watt_para_cv(valor); break;
            case 4: resultado = hp_para_watt(valor); break;
            case 5: resultado = kw_para_watt(valor); break;
            case 6: resultado = cv_para_watt(valor); break;
            default: 
                printf("Opção inválida!\n"); 
                continue;
        }

        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar(); getchar();
    } while (opcao != 0);
}

void menu_area(){
    int opcao;
    float valor, resultado;

    do{ 
        system ("clear || cls");
        printf("MENU ÁREA\n");
        printf("1. Metros quadrados para Centímetros quadrados\n");
        printf("2. Metros quadrados para Milímetros quadrados\n");
        printf("3. Centímetros quadrados para Metros quadrados\n");
        printf("4. Centímetros quadrados para Milímetros quadrados\n");
        printf("5. Milímetros quadrados para Metros quadrados\n");
        printf("6. Milímetros quadrados para Centímetros quadrados\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;
            
        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch(opcao){
            case 1: resultado = metrosQuadradosParaCentimetrosQuadrados(valor); break;
            case 2: resultado = metrosQuadradosParaMilimetrosQuadrados(valor); break;
            case 3: resultado = centimetrosQuadradosParaMetrosQuadrados(valor); break;
            case 4: resultado = centimetrosQuadradosParaMilimetrosQuadrados(valor); break;
            case 5: resultado = milimetrosQuadradosParaMetrosQuadrados(valor); break;
            case 6: resultado = milimetrosQuadradosParaCentimetrosQuadrados(valor); break;
            default: printf("Opção inválida!\n"); continue;
        }
        
        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar();
        getchar();
    }while (opcao != 0);
}

void menu_temperatura() {
    int opcao;
    float valor, resultado;

    do {
        system("clear || cls");
        printf("MENU TEMPERATURA\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Celsius para Kelvin\n");
        printf("3. Fahrenheit para Celsius\n");
        printf("4. Kelvin para Celsius\n");
        printf("5. Fahrenheit para Kelvin\n");
        printf("6. Kelvin para Fahrenheit\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: resultado = celsius_para_fahrenheit(valor); break;
            case 2: resultado = celsius_para_kelvin(valor); break;
            case 3: resultado = fahrenheit_para_celsius(valor); break;
            case 4: resultado = kelvin_para_celsius(valor); break;
            case 5: resultado = fahrenheit_para_kelvin(valor); break;
            case 6: resultado = kelvin_para_fahrenheit(valor); break;
            default: printf("Opção inválida!\n"); continue;
        }

        printf("Resultado: %.6f\n", resultado);
        printf("Pressione a tecla Enter para continuar...");
        getchar(); getchar();
    } while (opcao != 0);
}