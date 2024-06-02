#include <stdio.h>
int main (){
	
	int f=0, c=0;
	
	printf("Digite um numero para fazer tabuada: ");
	scanf("%d", &f);
	
	do{
		printf("%d X %d = %d\n", f, c, f*c);
		c++;
		
	}while(c<=10);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
