#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    
    // Solicita ao usuário para fornecer um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número fornecido é positivo
    if (n < 0) {
        printf("O numero fornecido nao e positivo.\n");
        return 1; // Encerra o programa com código de erro 1
    }

    

    // Imprime as potências do número de 0 até a n-ésima potência
    printf("Potencias do numero %d de 0 ate %d-esima potencia:\n", n, n);
    for (i = 0; i <= n; i++) {
        printf("%d elevado a %d = %.0f\n", n, i, pow(n, i));
    }

    return 0;
}

