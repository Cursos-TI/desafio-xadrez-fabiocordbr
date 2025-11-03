#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int bispo = 5;
    int torre = 5;
    int rainha = 5;
    int cavalo;

    //estrutura de repetição para o movimento do bispo
    printf("\n");
    printf("Bispo\n");
    printf("\n");

    while (bispo > 0 && bispo < 8)
    {
        printf("Cima-Direita\n");
        bispo--;
    }

    // movimento da torre
    printf("\n");
    printf("Torre\n");
    printf("\n");

    for (torre = 5; torre > 0; torre--)
    {
        printf("Direita\n");
    }

    // Movimento da rainha
    printf("\n");
    printf("Rainha\n");
    printf("\n");
    
    do
    {
        printf("Esquerda\n");
        rainha--;
    } while (rainha > 0 && rainha < 8);

    //movimento do cavalo
    printf("\n");
    printf("Cavalo\n");
    printf("\n");
    
    for (cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("baixo\n");
        
        while (cavalo == 2)
        {
            printf("Esquerda\n");
            cavalo++;
        }
        
    }
    
    
    
    return 0;
}
