#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite 5 numeros inteiros:\n");

    // Loop para inserir 5 números
    while (contador < 5) {
        printf("Digite o %d numero: ", contador + 1);
        scanf("%d", &numero);

        soma += numero; // Adiciona o número à soma
        contador++; // Incrementa o contador de números
    }

    // Calcula a média
    media = soma / 5;
    printf("A media dos nemeros digitados eh: %.2f\n", media);

    return 0;
}

