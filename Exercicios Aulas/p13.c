#include <stdio.h>
int main (){
	
	
	int a=0, b=0, c=0;
	
	printf("Informe o %d valor: ", a+1);
	scanf("%d", &a);
	printf("Informe o %d valor: ", b+2);
	scanf("%d", &b);
	printf("Informe o %d valor: ", c+3);
	scanf("%d", &c);
	
	
	if(a>b && a>c){
		printf("O primeiro valor eh o maior");
	}
	else if(b>a && b>c){
		printf("O segundo valor eh o maior");
	}
	
	else if(c>a && c>b){
		printf("O terceiro valor eh o maior");
	}
	
	else{
	
	printf("Valores iguais");
}
	return 0;
}

