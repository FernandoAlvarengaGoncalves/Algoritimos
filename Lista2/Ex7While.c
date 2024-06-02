#include <stdio.h>

int main() {
    int n, soma = 0, digito;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // Calcula a soma dos dígitos usando um loop while
    while (n != 0) {
        // Extrai o último dígito
        digito = n % 10;
        
        // Adiciona o dígito à soma
        soma = soma+digito;
        
        // Remove o último dígito do número
        n /= 10;
    }

    // Exibe a soma dos dígitos
    printf("A soma dos digitos do numero eh: %d\n", soma);

    return 0;
}

