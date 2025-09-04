#include <stdio.h>

// Pag. 36 e Ex. 01
/* Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. */

int main() {
    int num1, num2, num3, num4, soma;

    printf("\n");
    printf("Digite os numeros abaixo para somar. Devem ser valores inteiros.\n");
    printf("1. numero: ");
    scanf("%d", &num1);
    printf("2. numero: ");
    scanf("%d", &num2);
    printf("3. numero: ");
    scanf("%d", &num3);
    printf("4. numero: ");
    scanf("%d", &num4);

    soma = num1 + num2 + num3 + num4;
    printf("Soma dos 4 numeros informados: %d\n", soma);
    
    return 0;
}
