#include <stdio.h>

int main() {
    int i, j, temp, mat[3][3];

    printf("Informe os elementos da matriz: \n");

    // Preenchendo a matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
       // Matriz atual
    printf("Matriz atual: \n");   
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }
    
    int n=2, s=1;

    // Trocando as duas últimas linhas
    for(j = 0; j < 3; j++) {
        temp = mat[s][j];
        mat[1][j] = mat[2][j];
        mat[2][j] = temp;
    }

    printf("\nMatriz trocando as duas ultimas linhas: \n");

    // Imprimindo a matriz após a troca
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

