#include <stdio.h>

// Pág.66 - Ex. 07:

/* Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro. */

/* Se o valor de I for:
    1. Coloque A, B e C em ordem crescente.
    2. Coloque A, B e C em ordem decrescente.
    3. O maior fica entre os outros dois números.
*/

int main() {
    float a, b, c;
    int i;

    printf("\n");
    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);
    printf("Digite um valor para I (1, 2 ou 3): ");
    scanf("%d", &i);

    if (i == 1) {
        if (a < b && a < c) {
            if (b < c) {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", a, b, c);
            } else {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", a, c, b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", b, a, c);
            } else {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", b, c, a);
            }
        } else if (c < a && c < b) {
            if (a < b) {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", c, a, b);
            } else {
                printf("\nOrdem crescente dos numeros: %.2f, %.2f, %.2f\n", c, b, a);
            }
        }
    } else if (i == 2) {
        if (a > b && a > c) {
            if (b > c) {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", a, b, c);
            } else {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", a, c, b);
            }
        } else if (b > a && b > c) {
            if (a > c) {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", b, a, c);
            } else {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", b, c, a);
            }
        } else if (c > a && c > b) {
            if (a > b) {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", c, a, b);
            } else {
                printf("\nOrdem decrescente dos numeros: %.2f, %.2f, %.2f\n", c, b, a);
            }
        }
    } else if (i == 3) {
        if (a > b && a > c) {
            printf("\nA ordem desejada eh: %.2f, %.2f, %.2f\n", b, a, c);
        } else if (b > a && b > c) {
            printf("\nA ordem desejada eh: %.2f, %.2f, %.2f\n", a, b, c);
        } else if (c > a && c > b) {
            printf("\nA ordem desejada eh: %.2f, %.2f, %.2f\n", a, c, b);
        }
    }

    return 0;
}
