#include <stdio.h>
#include <stdlib.h>

// Função para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n == 1) // Primeiro termo
        return 0;
    else if (n == 2) // Segundo termo
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    printf("O termo %d eh: %d\n", n, fibonacci(n));
    return 0;
}

