#include <stdio.h>

int main() {
    int i, j, mat[3][2];

    printf("Informe os elementos da matriz 3x2: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz atual: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Criando a matriz transposta (2x3)
    int matT[2][3];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            matT[i][j] = mat[j][i]; // Troca de linhas por colunas
        }
    }

    printf("\nMatriz transposta: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matT[i][j]);
        }
        printf("\n");
    }

    return 0;
}

