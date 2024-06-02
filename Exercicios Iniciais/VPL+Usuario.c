#include <stdio.h>
#include <math.h>

// Função para calcular o VPL
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
    
    // Solicita ao usuário o número de períodos
    printf("Digite o numero de periodos: ");
    scanf("%d", &num_periodos);
    
    // Aloca dinamicamente o array para armazenar os fluxos de caixa
    float *fluxos_de_caixa = (float *)malloc(num_periodos * sizeof(float));
    
    // Solicita ao usuário os fluxos de caixa para cada período
    printf("Digite os fluxos de caixa para cada período:\n");
    int t;
    for (t = 0; t < num_periodos; t++) {
        printf("Fluxo de caixa no período %d: ", t + 1);
        scanf("%f", &fluxos_de_caixa[t]);
    }
    
    // Solicita ao usuário a taxa de desconto
    printf("Digite a taxa de desconto (em decimal): ");
    scanf("%f", &taxa_desconto);
    
    // Calcula o VPL
    float vpl = calcular_vpl(fluxos_de_caixa, num_periodos, taxa_desconto);
    
    // Imprime o resultado
    printf("O Valor Presente Líquido (VPL) do projeto eh: %.2f\n", vpl);
    
    // Libera a memória alocada para o array de fluxos de caixa
    free(fluxos_de_caixa);
    
    return 0;
}
