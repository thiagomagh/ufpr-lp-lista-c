#include <stdio.h>

// Pag. 38 e Ex. 03
/* Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada. */

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, soma, total, media;

    printf("\n");
    printf("Digite as notas e seus respectivos pesos abaixo para descobrir a media.\n");
    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("Peso 1: ");
    scanf("%f", &peso1);
    printf("\nNota 2: ");
    scanf("%f", &nota2);
    printf("Peso 2: ");
    scanf("%f", &peso2);
    printf("\nNota 3: ");
    scanf("%f", &nota3);
    printf("Peso 3: ");
    scanf("%f", &peso3);

    soma = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
    total = peso1 + peso2 + peso3;
    media = soma / total;
    printf("\nMedia das notas: %.2f\n", media);

    return 0;
}
