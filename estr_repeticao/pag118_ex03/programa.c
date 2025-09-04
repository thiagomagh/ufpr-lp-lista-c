#include <stdio.h>

// Pag. 118 e Ex. 03:

/* Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor. */

int main() {
    int n, num;
    long long int fat = 1;

    printf("\n");
    printf("Informe quantos numeros devem ser lidos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nDigite um valor inteiro e positivo: ");
        scanf("%d", &num);
        fat = 1;

        for (int j = 1; j <= num; j++) {
            fat = fat * j;
        }

        printf("Numero: %d \t | Fatorial: %lld\n", num, fat);
    }

    return 0;
}
