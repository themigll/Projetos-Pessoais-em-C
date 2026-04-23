#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero, i, soma;

    for (numero = 1; numero <= 100; numero++) {
        soma = 0;

        for (i = 1; i < numero; i++) {
            if (numero % i == 0) {
                soma += i;
            }
        }

        if (soma == numero) {
            printf("%d e um numero perfeito\n", numero);
        }
    }

    system("pause");
    return 0;
}