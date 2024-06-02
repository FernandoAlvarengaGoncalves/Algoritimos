#include <stdio.h>

int main (){
	
	int a, b, c;
	
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	
	printf("Informe o valor de C: ");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("A eh o maior");
	}
	else if(b>a && b>c){
		printf("B eh o maior");
	}
	else{
		printf("C eh o maior");
	}
	
	return 0;
}
