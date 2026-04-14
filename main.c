#include <stdio.h>
#include <locale.h>

int main(void) {

    float nota1, nota2, nota3, nota4, media;

    printf("Digite sua nota do Primeiro Bimestre: ");
    scanf("%f", &nota1);

    printf("Digite sua nota do Segundo Bimestre: ");
    scanf("%f", &nota2);

    printf("Digite sua nota do Terceiro Bimestre: ");
    scanf("%f", &nota3);

    printf("Digite sua nota do Quarto Bimestre: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media e: %.2f\n", media);

    system("pause");

    return 0;
}