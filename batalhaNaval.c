#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    int navio1[3] = { 3, 3, 3};
    int navio2[3] = { 3, 3, 3};

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

    for (int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}