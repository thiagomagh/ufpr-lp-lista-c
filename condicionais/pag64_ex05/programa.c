#include <stdio.h>

// Pág.64 - Ex. 05:

/* Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes. */

int main() {
    float num1, num2, num3, num4;
    printf("\n");
    printf("Digite abaixo tres numeros em ordem crescente.\n");
    printf("1. numero: ");
    scanf("%f", &num1);
    printf("2. numero: ");
    scanf("%f", &num2);
    printf("3. numero: ");
    scanf("%f", &num3);
    printf("\nDigite um outro numero (fora de ordem): ");
    scanf("%f", &num4);
    
    if (num4 > num3) {
        printf("\nOrdem decrescente: %.2f, %.2f, %.2f, %.2f\n", num4, num3, num2, num1);
    } else if (num4 > num2 && num4 < num3) {
        printf("\nOrdem decrescente: %.2f, %.2f, %.2f, %.2f\n", num3, num4, num2, num1);
    } else if (num4 > num1 && num4 < num2) {
        printf("\nOrdem decrescente: %.2f, %.2f, %.2f, %.2f\n", num3, num2, num4, num1);
    } else if (num4 < num1) {
        printf("\nOrdem decrescente: %.2f, %.2f, %.2f, %.2f\n", num3, num2, num1, num4);
    }

    return 0;
}
