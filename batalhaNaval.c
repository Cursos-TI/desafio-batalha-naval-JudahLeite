#include <stdio.h>

int main() {
    int tabuleiro[10][10]; //Estrutura da Matriz

    //Inicialização da matirz com zeros.

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
           tabuleiro[i][j]=0; 
        }
    }

    //Primeiro Navio.
    for(int i = 3; i<4; i++){
        for(int j=2; j<5; j++){
            tabuleiro[i][j]=3;
        }
    }
    //Segundo Navio.
    for(int j = 8; j<9; j++){
        for(int i=2; i<5; i++){
            tabuleiro[i][j]=3;
        }
    }

    //Imprimindo o Tabuleiro

    printf("  "); //Cabeçalho
    for(int i = 0; i<10; i++){
        printf("%c ",'A'+i); //Letras para colunas
    }
    printf("\n");
    
    for(int i = 0; i<10; i++){
        printf("%d ",i+1); // Números para linhas
        for (int j=0; j<10; j++ ){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Navio 1 está na posição");
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
