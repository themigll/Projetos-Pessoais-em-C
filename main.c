#include <stdio.h>
#include <stdlib.h>

int main() {
    char operador;
    float num1, num2;

    printf("Escolha uma operacao (+,-,*,/): ");
    scanf(" %c", &operador);

    printf("Digite seu primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite seu segundo numero: ");
    scanf("%f", &num2);

    printf("\n");

    switch(operador) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Nao e possivel dividir por zero!\n");
            } else {
                printf("Resultado: %.2f\n", num1 / num2);
            }
            break;

        default:
            printf("Error: Operador invalido!\n");
    }

    system("pause");
    return 0;
}