#include <stdio.h>

// Pag. 147 e Ex. 08:

/* Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que calcule e mostre:
    - a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    - a média das idades das pessoas com altura inferior a 1,50 m;
    - a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e 
    - a quantidade de pessoas ruivas e que não possuem olhos azuis. */

int main()
{
    int idade, cont_idade50_peso60 = 0, cont_idade_baixos = 0, cont_olhos_azuis = 0, cont_ruivos = 0;
    float altura, peso, soma_idade_baixos = 0.0;
    char olho, cabelo;

    for (int i = 1; i <= 6; i++) {
        printf("\n");
        printf("=== PESSOA %d ===\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Cor dos olhos (A - azul; P - preto; V - verde; C - castanho): ");
        scanf(" %c", &olho);
        printf("Cor do cabelo (P - preto; C - castanho; L - louro; R - ruivo): ");
        scanf(" %c", &cabelo);

        if (idade > 50 && peso < 60) {
            cont_idade50_peso60++;
        }
        
        if (altura < 1.50) {
            soma_idade_baixos = soma_idade_baixos + idade;
            cont_idade_baixos++;
        }

        if (olho == 'A' || olho == 'a') {
            cont_olhos_azuis++;
        }

        if ((cabelo == 'R' || cabelo == 'r') && (olho != 'A' && olho != 'a')) {
            cont_ruivos++;
        }

        printf("\n");
    }

    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", cont_idade50_peso60);
    printf("Média das idades das pessoas com altura inferior a 1.50m: %.2f\n", cont_idade_baixos > 0 ? soma_idade_baixos / cont_idade_baixos : 0.0);

    /*
    if (cont_idade_baixos > 0) {
        printf("Média das idades das pessoas com altura inferior a 1.50m: %.2f\n", soma_idade_baixos / cont_idade_baixos);
        
    } else {
        printf("Média das idades das pessoas com altura inferior a 1.50m: %.2f\n", 0.0);
    } */

    // type cast: converte o numero para tipo float antes da divisao
    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", (float)cont_olhos_azuis / 6.00 * 100);
    printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", cont_ruivos);

    return 0;
}
