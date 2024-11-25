#include <stdio.h>

int verifica (int n);

int main (){
	
	int n=0;
	printf("Informe um numero: \n");
	scanf("%d", &n);
	verifica (n);
	
	return 0;
}

int verifica (int n){
	if (n%2==0)
		printf("O numero eh PAR");
	else 
		printf("O numero eh impar");	
}
