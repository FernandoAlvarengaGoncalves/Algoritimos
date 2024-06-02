#include <stdio.h>
#include <math.h>

// Fun��o para calcular o VPL
float calcular_vpl(float fluxos_de_caixa[], int num_periodos, float taxa_desconto) {
    float vpl = 0;
    int t;
    for (t = 0; t < num_periodos; t++) {
        vpl += fluxos_de_caixa[t] / pow((1 + taxa_desconto), t);
    }
    return vpl;
}

int main() {
    int num_periodos;
    float taxa_desconto;
    
    // Solicita ao usu�rio o n�mero de per�odos
    printf("Digite o numero de periodos: ");
    scanf("%d", &num_periodos);
    
    // Aloca dinamicamente o array para armazenar os fluxos de caixa
    float *fluxos_de_caixa = (float *)malloc(num_periodos * sizeof(float));
    
    // Solicita ao usu�rio os fluxos de caixa para cada per�odo
    printf("Digite os fluxos de caixa para cada per�odo:\n");
    int t;
    for (t = 0; t < num_periodos; t++) {
        printf("Fluxo de caixa no per�odo %d: ", t + 1);
        scanf("%f", &fluxos_de_caixa[t]);
    }
    
    // Solicita ao usu�rio a taxa de desconto
    printf("Digite a taxa de desconto (em decimal): ");
    scanf("%f", &taxa_desconto);
    
    // Calcula o VPL
    float vpl = calcular_vpl(fluxos_de_caixa, num_periodos, taxa_desconto);
    
    // Imprime o resultado
    printf("O Valor Presente L�quido (VPL) do projeto eh: %.2f\n", vpl);
    
    // Libera a mem�ria alocada para o array de fluxos de caixa
    free(fluxos_de_caixa);
    
    return 0;
}
