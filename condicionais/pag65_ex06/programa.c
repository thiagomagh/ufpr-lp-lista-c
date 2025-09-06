#include <stdio.h>

// Pág.65 - Ex. 06:

/* Faça um programa que receba um número inteiro e verifique se é par ou ímpar. */

int main() {
    int num, resto_div;
    printf("\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resto_div = num % 2;

    if (resto_div == 0) {
        printf("%d eh um numero par.\n", num);
    } else {
        printf("%d eh um numero impar.\n", num);
    }
    
    return 0;
}
