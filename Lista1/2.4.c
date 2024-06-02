#include <stdio.h>
#include <math.h>

int main (){
	
	double A, raiz, quadrado;
	
	scanf("%lf", &A);
	
	if(A>=0){
		
		quadrado = pow(A, 2);
		printf("Potencia ao quadrado = %lf\n", quadrado);
		
		raiz = sqrt (A);
		printf("Raiz quadrada = %lf", raiz);	
	}	
	else{
	}
	
	
	
	return 0;
}
