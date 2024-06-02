#include <stdio.h>
int main (){
	
	int n, i;
	long soma;
	
	printf("Digite o numero de termos da sequencia: ");
	scanf("%d", &n);
	
	printf("Digite os %d da sequencia:\n", n);
	
	for(i=1;i<=n;i++){
		int termo;
		scanf("%d", &termo);
		soma=soma+termo;
	}
	
	printf("A soma dos %d termos da sequencia eh: %ld\n", n, soma);
	
	
	
	
	
	
	
	
	
	return 0;
}
