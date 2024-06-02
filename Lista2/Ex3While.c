#include <stdio.h>
int main (){
	
	int n=1, soma=0;
	
	while (n<=100){
			
		//Verifica se o n é par:
		if(n%2==0){
			soma=soma+n;
		}
		n++;
	}
	
	printf("A soma dos pares entre o intervalo de 1 a 100 eh: %d", soma);
	
	
	
	return 0;
}
