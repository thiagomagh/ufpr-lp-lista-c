#include <stdio.h>

// Pag. 147 e Ex. 07:

/* Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
    - a quantidade de pessoas com idade superior a 50 anos;
    - a média das alturas das pessoas com idade entre 10 e 20 anos;
    - a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */

int main() {
    float altura, peso, soma_altura = 0, peso_abaixo_40 = 0;
    int idade, idade_acima_50 = 0, cont_altura = 0;
    
    for (int i = 1; i <= 5; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade > 50) {
            idade_acima_50++;
        } 
        
        if (idade >= 10 && idade <= 20) {
            soma_altura = soma_altura + altura;
            cont_altura++;
        } 
        
        if (peso < 40.00) {
            peso_abaixo_40++;
        }

        printf("\n");
    }

    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", idade_acima_50);

    if (cont_altura > 0) {
        printf("Media de altura das pessoas com idade entre 10 e 20 anos: %.2f\n", soma_altura / cont_altura);
    } else {
        printf("Nao ha pessoas com idade entre 10 e 20 anos.\n");
    }

    printf("Porcentagem das pessoas com peso inferior a 40kg = %.2f%%\n", peso_abaixo_40 / 5.0 * 100);

    return 0;
}
