#include <stdio.h>

int main() {
    int i, j;
    int matA[2][2] = {{1, 2}, {3, 4}};
    int matB[2][2] = {{4, 5}, {6, 7}};
    int matC[2][2];

    // Multiplicação de matrizes
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matC[i][j] = matA[i][0] * matB[0][j] + matA[i][1] * matB[1][j];
        }
    }

    printf("\nMatriz resultante (matC):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

