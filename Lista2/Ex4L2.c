#include <stdio.h>

int main() {
    int n, i;
    long long soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += 5 * i * i + 2 * i + 8;
    }

    printf("O resultado do somatorio é: %lld\n", soma);

    return 0;
}

