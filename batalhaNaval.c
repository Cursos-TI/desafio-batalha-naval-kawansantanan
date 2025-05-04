#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    int navio1[3] = { 3, 3, 3};
    int navio2[3] = { 3, 3, 3};
    int navio3[1] = { 3 };
    int navio4[1] = { 3 };

   for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
          tabuleiro[i][j] = 0;
   }
}

    for (int i = 0; i < 3; i++){
        tabuleiro[3][i] = navio1[i];
    }

    for (int i = 0; i < 3; i++){
        tabuleiro[i + 7][7] = navio2[i];
    }
    for(int i = 0; i < 3; i++){
        tabuleiro[5][2] = navio3[i];
        tabuleiro[6][1] = navio3[i];
        tabuleiro[7][0] = navio3[i];
    }

    for (int i = 0; i < 3; i++){
        tabuleiro[0][0] = navio4[i];
        tabuleiro[1][1] = navio4[i];
        tabuleiro[2][2] = navio4[i];
    }

    for (int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}