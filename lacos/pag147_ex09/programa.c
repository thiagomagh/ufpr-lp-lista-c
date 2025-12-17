#include <stdio.h>

// Pag. 147 - Ex. 09:

/* Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
    - a média das idades das dez pessoas;
    - a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
    - a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.  */

int main()
{
    int idade, soma_idade = 0, cont_peso_altura = 0, cont_altos = 0, cont_altos_jovens = 0;
    float peso, altura;

    for (int i = 0; i < 10; i++)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Altura: ");
        scanf("%f", &altura);

        // soma_idade = soma_idade_altos + idade;  
        soma_idade += idade;

        if (peso > 90 && altura < 1.50) {
            cont_peso_altura++;
        }

        if (altura > 1.90) {
            cont_altos++;

            if (idade >= 10 && idade <= 30) {
                cont_altos_jovens++;
            }
        }

        printf("\n");
    }

    // type cast: converte o numero para tipo float antes da divisao
    printf("Idade média = %.2f\n", (float)soma_idade / 10.00);
    printf("Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 m = %d\n", cont_peso_altura);
    // type cast: converte o numero para tipo float antes da divisao
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos e mais de 1,90 m de altura = %.2f%%\n", 
        cont_altos > 0 ? ((float)cont_altos_jovens / cont_altos) * 100 : 0);

    return 0;
}
