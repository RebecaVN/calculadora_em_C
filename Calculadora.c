#include <stdio.h>

int main() {
    int historico[100][3]; // Vetor para armazenar histórico de cálculos (cada linha tem dois valores e o resultado)
    int contador = 0; // Contador para manter o controle do histórico

    while (1) {
        int opcao;
        printf("Calculadora - Escolha uma opção:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Consultar histórico\n");
        printf("6. Sair\n");
        scanf("%d", &opcao);

        if (opcao == 6) {
            break; // Encerra o programa
        }

        int num1, num2, resultado;
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: Divisão por zero\n");
                    continue; // Volta ao início do loop
                }
                break;
            case 5:
                printf("Histórico de cálculos:\n");
                for (int i = 0; i < contador; i++) {
                    printf("%d. %d %d = %d\n", i + 1, historico[i][0], historico[i][1], historico[i][2]);
                }
                continue; // Volta ao início do loop
            default:
                printf("Opção inválida\n");
                continue; // Volta ao início do loop
        }

        historico[contador][0] = num1;
        historico[contador][1] = num2;
        historico[contador][2] = resultado;
        contador++;
        printf("Resultado: %d\n", resultado);
    }

    return 0;
}

