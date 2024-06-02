#include <stdio.h>
int main (){
	
	double A, B;
	double med;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	
	if ((A<=10.0 && A>=0) && (B<=10.0 && B>=0)){
		med = (A+B) / 2;
		printf("Media do aluno: %lf", med);
		
	}
	else {
		printf("Nota invalida");
		
	}
	
	return 0;
}
