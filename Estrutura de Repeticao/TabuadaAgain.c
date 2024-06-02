#include <stdio.h>
int main (){
	
	int f, c;
	
	c=0;
	f=0;
	
	printf("Digite o Numero de 1 a 10 para fazer a tabuada : ");
	scanf("%d", &f);
	
	do {
		printf("%d X %d = %d\n", f, c, f*c);
		c++;
		
	}while(c<=10);
	
	return 0;
}
