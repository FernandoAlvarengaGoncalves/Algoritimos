#include <stdio.h>
int fatorial(int n);
int main() {
int numero;
printf("Digite um número para calcular o fatorial: ");
scanf("%d", &numero);
printf("Fatorial de %d é %d\n", numero, fatorial(numero));
return 0;
}
int fatorial(int n) {
if (n == 0) {
return 1; // O fatorial de 0 é 1
} else {
return n * fatorial(n - 1); // Chamada recursiva
}
}
