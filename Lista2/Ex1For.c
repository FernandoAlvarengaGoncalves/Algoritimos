#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

	for (i = 2; i <= numero; i=i+2){
            printf("%d ", i);
        }
        
    

    return 0;
}


