#include <stdio.h>

// Pág. 90 e Ex. 01

/* Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7. */

int main() {
    float nota1, nota2, nota3, nota4, media;
    printf("\n");
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.00;
    
    if (media >= 7.00 && media <= 10.00) {
        printf("\nMedia das notas: %.2f\n", media);
        printf("Situacao do aluno: Aprovado\n");
    } else if (media >= 0 && media < 7) {
        printf("\nMedia das notas: %.2f\n", media);
        printf("Situacao do aluno: Reprovado\n");
    } else {
        printf("\nValores informados sao invalidos\n");
    }

    return 0;
}
