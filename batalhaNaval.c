#include <stdio.h>
int matriz[3][5]; // Estrutura da matriz Cone
void MatrizCone (int i){
    for(i; i<3; i++){
        for(int j = 0; j<5; j++){
            if (i==0 && j==2){
                matriz[i][j] = 5;
            } else if (i==1 && j<=3){
                matriz[i][j] = 5;
            } else if(i==2 && 0<=j<=4){
                matriz[i][j] = 5;
            }else{
                matriz[i][j]= 0;
            }
        printf("%d ",matriz[i][j]);          
        }
    printf("\n");    
    }
}

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
    // Terceiro Navio.
    for(int i =6; i<9;i++){
        for(int j =6; j<9;j++ ){
            if (i==j) {
                tabuleiro[i][j]=3;
            }            
        }
    }

    // Quarto Navio.
    for (int i=6;i<9;i++){
        for (int j = 3; j>0;j--){
            if (j+i==9){
                tabuleiro[i][j]=3;
            }
        }
    }
    //Imprimindo o Tabuleiro

    printf("   "); //Cabeçalho
    for(int i = 0; i<10; i++){
        printf("%c ",'A'+i); //Letras para colunas
    }
    printf("\n");
    
    for(int i = 1; i<10; i++){
        printf("%2d ",1+i); // Números para linhas
        for (int j=0; j<10; j++ ){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    MatrizCone(0);
    
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
