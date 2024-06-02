#include<stdio.h>

int main(){
    int vet[30];
    int i, j, contador, maior=0, mais_repetido=0;

    // Ler o primeiro valor
    printf("Informe o primeiro valor de uma lista de 30 valores:");
    scanf("%d", &vet[0]);

    // Ler os próximos 29 valores
    for(i=1; i<30; i++){
        printf("Informe o próximo valor:");
        scanf("%d", &vet[i]);
    }

    // Verificar qual valor é mais repetido
    for(j=0; j<30; j++){
        contador = 1; // Inicializar contador com 1 para incluir o próprio elemento
        for(i=0; i<30; i++){
            if(i != j && vet[j] == vet[i]){
                contador++;
            }
        }
        if(contador > maior){
            maior = contador;
            mais_repetido = vet[j];
        }
    }

    // Exibir resultado
    if(maior == 1){
        printf("Nenhum elemento do vetor se repete!\n");
    } else {
        printf("Valor mais repetido no vetor: %d\nNúmero de vezes repetido: %d\n", mais_repetido, maior);
    }

    return 0;
}


