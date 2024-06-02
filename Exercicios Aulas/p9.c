#include <stdio.h>
int main (){
	
	int p;
	
	printf("Digite o valor do produto: ");
	scanf("%d", &p);
	
	if(p<100){
		p=p*0.1+p;
	}
	else if(p>=100){
		p=p*0.2+p;
	}
	
	printf("Preço final do produto com inflacao: %d", p);
	
	
	
	
	
	return 0;
}

