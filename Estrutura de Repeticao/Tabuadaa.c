#include <stdio.h>
int main (){
	
	
	int n, c=0;
	
	printf("Digite o numero de um a 10 para tabuada: ");
	scanf("%d", &n);
	
	do{
		printf("%d X %d = %d\n", n, c, n*c);
		c++;
		
	}while (c<=10);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
