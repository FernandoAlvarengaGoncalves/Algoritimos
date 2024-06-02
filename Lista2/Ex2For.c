#include <stdio.h>
int main (){
	
	int i, soma=0;
	
	for(i=1;i<=100;i++){
		if(i%2==0){
			soma=soma+i;
		}
	}
	
	printf("A soma dos pares de 1 a 100 eh: %d", soma);
	
	
	
	
	
	return 0;
}
