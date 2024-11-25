#include <stdio.h>

int main() {
    int vet[9] = {10, 12, 0, 3, 15, 19, 1, 2, 4};
    int i, temp;

    // Inverter o vetor
    for (i = 0; i < 4; i++) { // Fazemos até o meio do vetor
        temp = vet[i];
        vet[i] = vet[8 - i]; // Troca com o elemento simétrico
        vet[8 - i] = temp;
    }

    // Exibir o vetor invertido
    printf("Vetor invertido: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

