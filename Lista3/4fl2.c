#include <stdio.h>
int main (){
	
	int soma, count=0, n;
	float media;
	
	printf("Digite o %d numero", count+1);
	scanf("%d", &n);
	soma=soma+n;
	
	for(count=1;count<10;count++){
		printf("Digite o %d numero", count+1);
		scanf("%d", &n);
		soma=soma+n;
	}
	
	media=soma/10;
	
	printf("A media dos numeros informados eh: %f", media);
	
	
	
	
	
	
	return 0;
}
