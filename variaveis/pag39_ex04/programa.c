#include <stdio.h>

// Pag. 39 e Ex. 04
/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%. */

int main() {
    float salario, novo_salario;
    printf("\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    
    // novo_salario = salario * 1.25;
    novo_salario = salario + (salario * 25.00/100.00);
    printf("\nO novo salario do funcionario: %.2f\n", novo_salario);

    return 0;
}
