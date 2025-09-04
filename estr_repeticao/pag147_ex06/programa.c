#include <stdio.h>

// Pag. 147 e Ex. 06:

/* Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba o código e o valor de quinze transações, calcule e mostre:
    - o valor total das compras à vista;
    - o valor total das compras a prazo;
    - o valor total das compras efetuadas; e 
    - o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */

int main() {
    char cod_transacao;
    float valor, val_vista = 0, val_prazo = 0;
    
    for (int i = 1; i <= 15; i++) {
        printf("\nValor da compra %d: ", i);
        scanf("%f", &valor);
        printf("Tipos de pagamento: V (a vista) ou P (a prazo).\n");
        printf("Informe o tipo: ");
        scanf(" %c", &cod_transacao);

        if (cod_transacao == 'v' || cod_transacao == 'V') {
            val_vista = val_vista + valor;
        } else if (cod_transacao == 'p' || cod_transacao == 'P') {
            val_prazo = val_prazo + valor;
        } else {
            printf("\nOpcao invalida");
        }
    }

    printf("\nValor total a vista = %.2f\n", val_vista);
    printf("Valor total a prazo = %.2f\n", val_prazo);
    printf("Valor total das compras efetuadas = %.2f\n", val_vista + val_prazo);
    printf("Primeira prestacao = %.2f\n", val_prazo / 3);

    return 0;
}
