#include <stdio.h>
#include <math.h> // Para usar sqrt()

int main() {
    float a, b, c, delta, x1, x2;

    // Solicita os valores de a, b e c
    printf("Informe os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calcula o delta
    delta = b * b - 4 * a * c;

    // Verifica se delta é negativo, zero ou positivo
    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existe apenas uma raiz real: x1 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
