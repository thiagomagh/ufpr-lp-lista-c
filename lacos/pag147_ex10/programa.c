#include <stdio.h>

// Pag. 147 - Ex. 10:

/* Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos números primos. */

int main()
{
    int num, soma_pares  = 0, soma_primos = 0, cont_divisores;
    printf("\n");

    for (int i = 1; i <= 10; i++) {   
        printf("%d. Digite um valor: ", i);
        scanf("%d", &num);
        cont_divisores = 0;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                cont_divisores++;
            }
        }

        if (num % 2 == 0) {
            soma_pares  = soma_pares + num;
        }

        if (cont_divisores == 2) {
            soma_primos = soma_primos + num;
        }
    }

    printf("\nSoma dos numeros primos: %d\n", soma_primos);
    printf("Soma dos numeros pares = %d\n", soma_pares );

    return 0;
}
