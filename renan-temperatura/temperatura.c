#include <stdio.h>

// Função de conversão de temperatura
void conversao_temperatura() {
    int opcao;
    float valor, resultado;

    do {
        printf("\n===========================\n");
        printf("       Conversor de Temperaturas       \n");
        printf("===========================\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Kelvin para Celsius\n");
        printf("4 - Celsius para Kelvin\n");
        printf("5 - Fahrenheit para Kelvin\n");
        printf("6 - Kelvin para Fahrenheit\n");
        printf("0 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        if (opcao < 1 || opcao > 6) {
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch(opcao) {
            case 1:
                resultado = (valor * 9/5) + 32;
                printf("%.2f Celsius equivale a %.2f Fahrenheit\n", valor, resultado);
                break;
            case 2:
                resultado = (valor - 32) * 5/9;
                printf("%.2f Fahrenheit equivale a %.2f Celsius\n", valor, resultado);
                break;
            case 3:
                resultado = valor - 273.15;
                printf("%.2f Kelvin equivale a %.2f Celsius\n", valor, resultado);
                break;
            case 4:
                resultado = valor + 273.15;
                printf("%.2f Celsius equivale a %.2f Kelvin\n", valor, resultado);
                break;
            case 5:
                resultado = (valor - 32) * 5/9 + 273.15;
                printf("%.2f Fahrenheit equivale a %.2f Kelvin\n", valor, resultado);
                break;
            case 6:
                resultado = (valor - 273.15) * 9/5 + 32;
                printf("%.2f Kelvin equivale a %.2f Fahrenheit\n", valor, resultado);
                break;
        }
    } while (opcao != 0);
}

// Função principal
int main() {
    conversao_temperatura();
    return 0;
}//
