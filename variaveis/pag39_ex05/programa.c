#include <stdio.h>

// Pag. 39 e Ex. 05
/* Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário. */

int main() {
    float salario, perc, aumento, novo_salario;
    
    printf("\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento do salario: ");
    scanf("%f", &perc);
    
    aumento = salario * (perc/100.00);
    novo_salario = salario + aumento;
    printf("\nValor do aumento salarial: R$ %.2f\n", aumento);
    printf("O novo salario do funcionario: R$ %.2f\n", novo_salario);

    return 0;
}
