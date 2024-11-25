#include <stdio.h>

double media_arit (double v1, double v2);


int main (){
	
	double media_f, v1, v2;
	
	printf("Informe o primeiro valor: \n");
	scanf("%lf", &v1);
	
	printf("Informe o segundo valor: \n");
	scanf("%lf", &v2);
	
	media_f = media_arit(v1, v2);
	
	printf("A media dos dois valores eh: %.2lf", media_f);
	
	
}

double media_arit (double v1, double v2){
	
	return (v1+v2)/2;
}
