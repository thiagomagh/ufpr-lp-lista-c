#include <stdio.h>

// Pag. 40 e Ex. 07
/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base. */

int main() {
    float sal_base, sal_receber, imp_sal;
    
    printf("\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &sal_base);
    
    imp_sal = sal_base * (10.0 / 100.00);
    sal_receber = sal_base + 50.00 - imp_sal;
    printf("\nSalario a receber com gratificao de R$ 50 e imposto: R$ %.2f\n", sal_receber);

    return 0;
}
