#include <stdio.h>
#include <math.h>

int main() {
    double numero_real;
    double resultado_quadrado;
    
    // Solicita ao usu�rio que insira um n�mero real
    printf("Digite um n�mero real: ");
    scanf("%lf", &numero_real);
    
    // Calcula o quadrado do n�mero usando a fun��o pow
    resultado_quadrado = pow(numero_real, 2);
    
    // Imprime o resultado
    printf("O quadrado de %.2lf �: %.2lf\n", numero_real, resultado_quadrado);
    
    return 0;
}
