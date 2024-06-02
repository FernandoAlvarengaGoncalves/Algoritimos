#include <stdio.h>
int main (){
	
	int n, i, soma=0;
	float media;
	
	for(i=1;i<=10;i++){
		printf("Informe o %d numero: ", i);
		scanf("%d", &n);
		soma=soma+n;
	}
	
	media=soma/10.0;
	
	printf("A media dos valores informados eh: %0.2f", media);
	
	
	
	
	
	return 0;
}
