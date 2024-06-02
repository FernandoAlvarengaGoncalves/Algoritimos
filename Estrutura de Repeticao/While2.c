#include <stdio.h>
int main (){
	
	int n, soma, contagem;
	
	soma=0;
	contagem=1;
	
	while(contagem<=5){
		printf("Digite o valor do numero para somar: ");
		scanf("%d", &n);
		soma = soma+n;
		contagem ++;
	}
	printf("O resultado da soma eh: %d", soma);
	
	
	
	
	
	
	
	
	return 0;
}
