#include <stdio.h>
#include <math.h>

int main() {
    double numero_real;
    double resultado_quadrado;
    
    // Solicita ao usuário que insira um número real
    printf("Digite um número real: ");
    scanf("%lf", &numero_real);
    
    // Calcula o quadrado do número usando a função pow
    resultado_quadrado = pow(numero_real, 2);
    
    // Imprime o resultado
    printf("O quadrado de %.2lf é: %.2lf\n", numero_real, resultado_quadrado);
    
    return 0;
}
