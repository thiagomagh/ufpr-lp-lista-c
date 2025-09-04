#include <stdio.h>

// Pág. 76 e Ex. 14

/* Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
acrescido de bonificação e de auxílio escola. */

/* Salario + Bonificacao
    - Até R$ 500,00:                 5% do salário;
    - Entre R$ 500,00 e R$ 1.200,00: 12% do salário;
    - Acima de R$ 1.200,00:          Sem bonificação. */

/* Salario + Auxilio Escola
    - Até R$ 600,00:      R$ 150,00;
    - Acima de R$ 600,00: R$ 100,00. */

int main() {
    float ant_sal, novo_sal, bonif_sal, aux;
    printf("\n");
    printf("Informe o salario do funcionario: ");
    scanf("%f", &ant_sal);

    if (ant_sal <= 500.00) {
        bonif_sal = ant_sal * (5.00 / 100.00);
    } else if (ant_sal <= 1200.00) {
        bonif_sal = ant_sal * (12.00 / 100.00);
    } else {
        bonif_sal = 0;
    }

    if (ant_sal <= 600.00) {
        aux = 150;
    } else {
        aux = 100;
    }

    novo_sal = ant_sal + bonif_sal + aux;
    printf("Novo salario do funcionario: R$ %.2f\n", novo_sal);

    return 0;
}
