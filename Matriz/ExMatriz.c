#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS]; 
    int i, j; 

    
    printf("Insira os elementos da matriz %d x %d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nMatriz inserida:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

