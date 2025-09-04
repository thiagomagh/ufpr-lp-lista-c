#include <stdio.h>

// Pag. 40 e Ex. 06
/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base. */

int main() {
    float sal_base, sal_receber, grat_sal, imp_sal;
    
    printf("\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &sal_base);
    
    grat_sal = sal_base * (5.0 / 100.00);
    imp_sal = sal_base * (7.0 / 100.00);
    sal_receber = sal_base + grat_sal - imp_sal;
    printf("\nSalario a receber com gratificao e imposto: R$ %.2f\n", sal_receber);

    return 0;
}
