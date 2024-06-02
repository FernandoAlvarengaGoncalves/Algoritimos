#include <stdio.h>
int main (){
	
	int i=1, soma=0;
	
	while (i<=100){
		if(i%2==0){
		soma=soma+i;
		}
		i++;
	}
	
	printf("A soma dos pares eh: %d", soma);
	
	
	
	
	
	
	
	return 0;
}

