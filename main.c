#include <stdio.h>
#include <stdlib.h>
#include "massa/massa.h"
#include "comprimento/comprimento.h"
#include "volume/volume.h"

void menu_massa();
void menu_comprimento();
void menu_volume();

int main() {
    int opcao;

    do {
        system("clear || cls");
        printf("MENU PRINCIPAL\n");
        printf("1. Conversões de Massa\n");
        printf("2. Conversões de Comprimento\n");
        printf("3. Conversões de Volume\n");
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
