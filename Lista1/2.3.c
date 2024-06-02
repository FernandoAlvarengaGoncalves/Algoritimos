#include <stdio.h>
#include <math.h>

int main (){
	
	double A, raiz, quadrado;
	
	scanf("%lf", &A);
	
	if (A>=0){
		
		raiz = sqrt (A);
		printf("Raiz quadrada = %lf", raiz);
	}
	else {
		quadrado = pow(A, 2);
		printf("Numero ao quadrado = %lf", quadrado);
	}
	
	
	
	
	return 0;
}
