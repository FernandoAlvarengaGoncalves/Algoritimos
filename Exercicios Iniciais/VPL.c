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
    // Fluxos de caixa para cada período
    float fluxos_de_caixa[] = {100, 200, 300};
    // Número de períodos
    int num_periodos = 3;
    // Taxa de desconto
    float taxa_desconto = 0.05;
    
    // Calcula o VPL
    float vpl = calcular_vpl(fluxos_de_caixa, num_periodos, taxa_desconto);
    
    // Imprime o resultado
    printf("O Valor Presente Líquido (VPL) do projeto é: %.2f\n", vpl);
    
    return 0;
}
