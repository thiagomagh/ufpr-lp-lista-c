#include <stdio.h>

// Pág.62 e Ex. 02   
/* Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0. */

int main() {
    float nota1, nota2, nota3, media, nota_exame;
    printf("\n");
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.00;
    printf("\nMedia das notas: %.2f\n", media);

    if (media >= 0 && media < 3) {
        printf("Situação do aluno: Reprovado\n");
    } else if (media >= 3.00 && media < 7) {
        printf("Situação do aluno: Exame\n");
        nota_exame = 12.00 - media;
        printf("Deve tirar nota %.2f para ser aprovado\n", nota_exame);
    } else if (media >= 7.00 && media <= 10.00) {
        printf("Situação do aluno: Aprovado\n");
    }

    return 0;
}
