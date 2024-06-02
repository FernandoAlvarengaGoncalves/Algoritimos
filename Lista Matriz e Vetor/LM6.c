#include <stdio.h>

int main() {
    int i, j, mat[3][3];

    printf("Informe os elementos da matriz: \n");

    // Preenchendo a matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matriz: \n");

    // Imprimindo cada linha
    printf("Linhas:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d] ", mat[i][j]);
        }
        printf("\n"); // Nova linha após cada linha
    }

    // Imprimindo cada coluna
    printf("\nColunas:\n");
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 3; i++) {
            printf("[%d] ", mat[i][j]);
        }
        printf("\n"); // Nova linha após cada coluna
    }

    return 0;
}

