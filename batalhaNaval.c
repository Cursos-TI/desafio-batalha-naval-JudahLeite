#include <stdio.h>
int matriz1[3][5]; // Estrutura da matriz Cone
int matriz2[3][5]; // Estrutura da matriz Cruz
int matriz3[3][5]; // Estrutura da matriz Octaedro

void MatrizCone (int i){ //Matriz Cone
    for(i; i<3; i++){
        for(int j = 0; j<5; j++){
            if (i==0 && j==2){
                matriz1[i][j] = 5;
            } else if (i==1 && j>0 && j<4){
                matriz1[i][j] = 5;
            } else if(i==2 && j<=4){
                matriz1[i][j] = 5;
            }else{
                matriz1[i][j]= 0;
            }
        printf("%d ",matriz1[i][j]);              
        }   
    printf("\n");     
    }
}

void MatrizCruz (int i){ //Matriz Cruz
    for (i;i<3;i++){
        for (int j=0; j<5;j++){
            if (i==1){
                matriz2[i][j]=5;
            }else if(j==2){
                matriz2[i][j]=5;
            }else{
                matriz2[i][j]=0;
            }    
        printf("%d ", matriz2[i][j]);
        }   
    printf("\n");
    }
}

void MatrizOctaedro (int i){ //Matriz Octaedro
    for (i;i<3;i++){
        for(int j = 0;j<5;j++){
            if(j==2){
                matriz3[i][j]=5;
            }else if(i==1 && j>0 && j<4){
                matriz3[i][j]=5;
            }else{
                matriz3[i][j]=0;
            }    
        printf("%d ", matriz3[i][j]);
        }
    printf("\n");
    }
}
int main() {
    int tabuleiro[10][10]; //Estrutura da Matriz
    
    MatrizCone(0);
    printf("\n");

    MatrizCruz(0);
    printf("\n");

    MatrizOctaedro(0);
    printf("\n");

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
    // Inclusão Matriz Cone no Tabuleiro.
    for (int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            tabuleiro[i][j]= matriz1[i][j];
        }
    }

    // Inclusão Matriz Cruz no Tabuleiro.
    for (int i=0;i<3;i++){
        for(int j=5;j<10;j++){
            if (i==1){
                tabuleiro[i][j]=5;
            }else if(j==7){
                tabuleiro[i][j]=5;
            }else{
                tabuleiro[i][j]=0;
            }    
        }
    }

    // Inclusão Matriz Octaedro no Tabuleiro.
    for (int i=6;i<9;i++){
        for(int j=2;j<7;j++){
            if(j==4){
                tabuleiro[i][j]=5;
            }else if(i==7 && j>2 && j<6){
                tabuleiro[i][j]=5;
            }else{
                tabuleiro[i][j]=0;
            }    
        }
    }
    
    
    //Imprimindo o Tabuleiro

    printf("   "); //Cabeçalho
    for(int i = 0; i<10; i++){
        printf("%c ",'A'+i); //Letras para colunas
    }
    printf("\n");
    
    for(int i = 0; i<10; i++){
        printf("%2d ",1+i); // Números para linhas
        for (int j=0; j<10; j++ ){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
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
