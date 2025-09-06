#include <stdio.h>

// Pag. 147 e Ex. 08:

/* Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que calcule e mostre:
    - a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    - a média das idades das pessoas com altura inferior a 1,50 m;
    - a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e 
    - a quantidade de pessoas ruivas e que não possuem olhos azuis. */

int main()
{
    int idade, a = 0, olhos_azuis = 0, ruivos = 0;
    float altura, peso, soma_idade_baixinhos = 0;
    int contador_baixinhos = 0;
    char olho, cabelo;

    for (int i = 1; i <= 6; i++)
    {
        printf("Pessoa %d\n", i);

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

        if (idade > 50 && peso < 60)
        {
            a++;
        }
        if (altura < 1.50)
        {
            contador_baixinhos++;
            soma_idade_baixinhos += idade;
        }
        if (olho == 'A')
        {
            olhos_azuis++;
        }
        if (cabelo == 'R' && olho != 'A')
        {
            ruivos++;
        }
        printf("\n");
    }

    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", a);
    printf("Média das idades das pessoas com altura inferior a 1.50m: %.1f\n", contador_baixinhos > 0 ? soma_idade_baixinhos / contador_baixinhos : 0);
    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", (float)olhos_azuis / 6 * 100);
    printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", ruivos);

    return 0;
}
