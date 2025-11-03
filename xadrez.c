#include <stdio.h>

int main() {

    int bispo = 5;
    int torre = 5;
    int rainha = 5;
    int cavalo;

    //movimento do bispo
    titulo("Bispo");
    movimentoBispo(bispo);

    // movimento da torre
    titulo("Torre");
    movimento(torre,"Direita");

    // Movimento da rainha
    titulo("Rainha");
    movimento(rainha,"Esquerda");

    //movimento do cavalo
    titulo("Cavalo");
    
    for (cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("Cima\n");
        
        while (cavalo == 2) {
            printf("Direita\n");
            cavalo++;
        }
        
    }
    
    
    
    return 0;
}

void movimento(int peça, char movimentoPeça[30]) {
    for (peça = peça; peça > 0; peça--) {

        printf("%s\n", movimentoPeça);
    }
}

void titulo(char tituloPeça[10]) {

    printf("\n");
    printf("%s\n", tituloPeça);
    printf("\n");
}

void movimentoBispo(int qtdCasas) {
    int qtdCasas2;
    for (; qtdCasas > 0; qtdCasas--)
    {
        printf("Cima - ");
        
        for (qtdCasas2 = 1; qtdCasas2 > 0; qtdCasas2--)
        {
            printf("Direita\n");
        }
        qtdCasas2++;
    }
}