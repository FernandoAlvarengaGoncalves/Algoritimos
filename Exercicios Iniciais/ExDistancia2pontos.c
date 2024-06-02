#include <stdio.h>
#include <math.h>

int main (){
	
	
	double X1, Y1, X2, Y2;
	double distancia;

	

	scanf("%lf %lf", &X1, &Y1);
	scanf("%lf %lf", &X2, &Y2);
	
	
	distancia = sqrt(pow(X2-X1, 2) + (pow(Y2-Y1, 2));

	printf("%.4lf\n", distancia);
	
	
	
	
	
	return 0;
}
