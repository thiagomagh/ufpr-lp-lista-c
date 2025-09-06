#include <stdio.h>

// Pág.64 - Ex. 04:

/* Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes. */

int main() {
    float num1, num2, num3;
    printf("\n");
    printf("Digite os numeros abaixo.\n");
    printf("1. numero: ");
    scanf("%f", &num1);
    printf("2. numero: ");
    scanf("%f", &num2);
    printf("3. numero: ");
    scanf("%f", &num3);
    
    if (num1 < num2 && num1 < num3) {
        if (num2 < num3) {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f\n", num1, num2, num3);
        } else {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f\n", num1, num3, num2);
        }
    } else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f\n", num2, num1, num3);
        } else {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f\n", num2, num3, num1);
        }
    } else if (num3 < num1 && num3 < num2) {
        if (num1 < num2) {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f", num3, num1, num2);
        } else {
            printf("\nOrdem crescente: %.2f, %.2f, %.2f", num3, num2, num1);
        }
    }

    return 0;
}
