#include <stdio.h>

// Pag. 118 - Ex. 02:

/* Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

int main() {
    int n;
    double e = 1.0;
    long long int fat = 1;

    printf("\n");
    printf("Informe um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {      
        fat = 1;

        for (int j = 1; j <= i; j++) {
            fat = fat * j;
        }

        e = e + 1.0 / fat;
    }

    printf("Valor de E: %.2f\n", e);

    return 0;
}
