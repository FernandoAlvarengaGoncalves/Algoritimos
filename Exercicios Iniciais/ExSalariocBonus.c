#include <stdio.h>
int main (){
	
	
	double salariofixo, vendas, comissao, totalreceber;
	char nome[20];
	
	scanf("%s", nome);
	scanf("%lf", &salariofixo);
	scanf("%lf", &vendas);
	
		
	comissao = vendas * 15.00 / 100;
	totalreceber = comissao + salariofixo;
	
	printf("TOTAL = R$ %.2lf\n", totalreceber);
	
	
	return 0;
}
