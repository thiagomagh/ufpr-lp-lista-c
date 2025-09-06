#include <stdio.h>

// Pág.63 - Ex. 03:

/* Faça um programa que receba dois números e mostre o maior. */

int main() {
    float num1, num2;
    printf("\n");
    printf("Digite os numeros abaixo.\n");
    printf("1. numero: ");
    scanf("%f", &num1);
    printf("2. numero: ");
    scanf("%f", &num2);
    
    if (num1 > num2) {
        printf("\nMaior número: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("\nMaior número: %.2f\n", num2);
    } else {
        printf("\nOs numeros sao iguais\n");
    }

    return 0;
}
