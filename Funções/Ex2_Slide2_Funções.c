#include <stdio.h>

double mh (double v1, double v2);


int main (){
	
	double media_f, v1, v2;
	
	printf("Informe o primeiro valor: \n");
	scanf("%lf", &v1);
	
	printf("Informe o segundo valor: \n");
	scanf("%lf", &v2);
	
	media_f = mh (v1, v2);
	
	printf("A media dos dois valores eh: %.2lf", media_f);
	
	
}

double mh (double v1, double v2){
	
	return 2 / ((1/v1) + (1/v2));
}
