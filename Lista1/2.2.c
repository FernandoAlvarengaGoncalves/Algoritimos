#include <stdio.h>
#include <math.h>
int main (){
	
	double A, raiz;
	
	scanf("%lf", &A);
	
	if (A>=0){
		raiz = sqrt(A);
	 
	 printf("Raiz quadrada = %lf", raiz);
}
	else{
		printf("Numero invalido");
	}
	
	
	
	
	return 0;
}
