#include <stdio.h>
int main (){
	
	double produto;
	double inflacaocem, inflacaoduzen;
	
	printf("Digite o Valor do Produto: ");
	scanf("%lf", &produto);
	
	inflacaocem = (produto*0.1)+produto;	
	
	inflacaoduzen = (produto*0.2)+produto;
	
	if (produto>=100){
			
		printf("O valor do produto com inflacao eh: %.2lf", inflacaocem);
	}
	
	
	else if (produto<100){
		printf("O valor do produto com inflacao eh: %.2lf", inflacaoduzen);
	}
	
	
	
	
	
	
	
	return 0;
}
