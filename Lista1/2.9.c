#include <stdio.h>
int main (){
	
	double salario, prest_emprest, prest_maior;
	
	scanf("%lf", &salario);
	scanf("%lf", &prest_emprest);
	
	prest_maior = salario*0.2;
	
	if (prest_emprest>prest_maior){
		printf("Emprestimo nao concedido");
	}
	else {
		printf("Emprestimo concedido");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
