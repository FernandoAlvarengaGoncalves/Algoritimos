#include <stdio.h>
int main (){
	
	double salario, bonus;
	double receber;
	
	scanf("%lf", &salario);
	
	bonus = salario*0.05;
	
	receber = bonus+salario;
	
	printf("Valor a receber = %lf", receber);
	
	
	
	
	return 0;
}
