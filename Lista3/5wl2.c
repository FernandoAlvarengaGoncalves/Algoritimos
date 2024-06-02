#include <stdio.h>
int main (){
	
	
	int n, soma, count=1;
	float media;
	
	
	printf("Digite o %d numero: ", count=1);
	scanf("%d", &n);
	
	soma=soma+n;
	
	while(count<5){
		printf("Digite o %d numero: ", count+1);
		scanf("%d", &n);
		soma=soma+n;
		count++;
	}
	
	
	
	media=soma/5;
	
	printf("A media eh: %f", media);
	
	
	
	
	return 0;

  }
