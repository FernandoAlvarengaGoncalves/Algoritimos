#include <stdio.h>
int main (){
	
	double tempo_gasto, velo_media, qtd_litros;
	
	scanf("%lf", &tempo_gasto);
	
	scanf("%lf", &velo_media);
	
	qtd_litros = (tempo_gasto*velo_media) / 12;
	
	printf("%.3lf\n", qtd_litros);
	
	
	
	
	
	
	
	
	return 0;
}
