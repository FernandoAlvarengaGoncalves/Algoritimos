#include <stdio.h>
int main (){
	
	//1.9.1
	
	double A, desconto, descfinal;
	double parcela, comissao, comispar;

	scanf("%lf", &A);
	
	desconto = (A*0.1); 
	descfinal = A-desconto;
	
	printf("Total a pagar com desconto = %lf\n", descfinal);
	
	//1.9.2
	
	parcela = A/3;
	
	printf("Valor de cada parcela = %lf\n", parcela);
	
	//1.9.3
	
	comissao = descfinal*0.05;
	
	printf("Valor da comissao = %lf\n", comissao);
	
	//1.9.4
	
	comispar = A*0.05;
	
	printf("Valor da comissao com venda parcelada = %lf", comispar);
	
	return 0;
}
	
