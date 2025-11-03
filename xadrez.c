#include <stdio.h>

int main() {

    int bispo = 5;
    int torre = 5;
    int rainha = 5;
    int cavalo;

    void movimento(int peça, char movimentoPeça[30]) {

        for (peça; peça > 0; peça--) {

            printf("%s\n", movimentoPeça);
        }
    }

    void mitulo(char tituloPeça[10]) {

        printf("\n");
        printf("%s\n", tituloPeça);
        printf("\n");
    }

    void movimentoBispo(char horizontal[10], char vertical[10]) {
        
        printf("%s - %s\n", horizontal, vertical);
    }
    
    //movimento do bispo
    titulo("Bispo");
    movimentoBispo("direita", "cima");

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
