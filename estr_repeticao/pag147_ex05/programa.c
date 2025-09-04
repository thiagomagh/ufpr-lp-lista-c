#include <stdio.h>

// Pag. 147 e Ex. 05:

/* Faça um programa que mostre as tabuadas dos números de 1 a 10. */

int main() {
    int result;

    for (int i = 1; i <= 10; i++) {
        printf("\nTabuada do %d\n", i);

        for (int j = 0; j <= 10; j++) {
            result = i * j;
            printf("%d x %d = %d\n", i, j, result);
        }
    }

    return 0;
}
