#include <stdio.h>

int main() {
    int altura;
    int linha; 

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    
    for (linha = 1; linha <= altura; linha++) {
        int coluna; 

        
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
