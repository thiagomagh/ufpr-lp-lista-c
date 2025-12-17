#include <stdio.h>

// Pag. 117 - Ex. 01:

/* 1. Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
    a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
    b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
    c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
    anterior.
Faça um programa que determine o salário atual desse funcionário. */

int main() {
    double atual_sal, novo_sal, perc_sal;
    int ano_atual;

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);
    atual_sal = 1000.00;
    perc_sal = 1.5/100.00;
    novo_sal = atual_sal + (perc_sal * atual_sal);  
    
    for (int i = 2007; i <= ano_atual; i++) {      
        perc_sal = 2 * perc_sal;
        novo_sal = novo_sal + (perc_sal * novo_sal);
    }

    printf("Novo salario do funcionario em %d: R$ %.2f\n", ano_atual, novo_sal);

    return 0;
}
