#include <stdio.h>

int main() {
    int n, i, num = 2, count = 0;
    long soma = 0;

    printf("Digite o numero de primos a somar: ");
    scanf("%d", &n);

    while (count < n) {
        int primo = 1; // Supomos inicialmente que num é primo
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = 0; // num não é primo
                break;
            }
        }

        if (primo) { // Se num é primo, adicionamos à soma
            soma += num;
            count++;
        }
        num++;
    }

    printf("A soma dos primeiros %d numeros primos eh: %ld\n", n, soma);

    return 0;
}

