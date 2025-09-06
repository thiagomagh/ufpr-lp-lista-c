#include <stdio.h>

// Pag. 36 - Ex. 02:

/* Faça um programa que receba três notas, calcule e mostre a média aritmética. */

int main() {
    float nota1, nota2, nota3, media;

    printf("\n");
    printf("Digite as notas abaixo para descobrir a media.\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Media das notas: %.2f\n", media);

    return 0;
}
