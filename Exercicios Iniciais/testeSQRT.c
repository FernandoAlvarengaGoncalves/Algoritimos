#include <stdio.h>
#include <math.h>

int main() {
    double numero, raiz;

    
    printf("Insira um numero: ");
    scanf("%lf", &numero);

  
    raiz = sqrt(numero);

    
    printf("A raiz quadrada de %.2lf é %.2lf\n", numero, raiz);

    return 0;
}
