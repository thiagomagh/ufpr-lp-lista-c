#include <stdio.h>

// Pag. 123 e Ex. 07:

/* Faça um programa que monte os oito primeiros termos da sequência de Fibonacci: 0-1-1-2-3-5-8-13-21-34-55... */

int main() {
    int num1 = 0, num2 = 1, result;

    printf("\n");
    printf("%d", num1);
    printf("\n%d", num2);

    for (int i = 3; i <= 8; i++) {
        result = num1 + num2;
        printf("\n%d", result);
        num1 = num2;
        num2 = result;
    }

    printf("\n");

    return 0;
}
