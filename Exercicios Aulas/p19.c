#include <stdio.h>
int main (){
	
	int i=1, n, soma=0;
	float media;
	
	while(i<=5){
		printf("Informe o %d numero: ", i);
		scanf("%d", &n);
		soma=soma+n;
		i++;
	}
	
	media=soma/5;
	
	printf("A media dos numeros informados eh: %f", media);
	
	
	
	
	
	
	
	return 0;
}

