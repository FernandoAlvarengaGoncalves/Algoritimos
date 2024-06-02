#include <stdio.h>
int main (){
	
	
	int n, soma, i;
	float media;
	
	for(i=1;i<=10;i++){
		printf("Informe o %d numero: ", i);
		scanf("%d", &n);
		soma=soma+n;
	}
	
	
	media=soma/10;
	
	printf("A media dos numeros informados eh: %f", media);
	
	
	
	
	return 0;
}

