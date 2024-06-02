#include <stdio.h>
int main (){
	
	int a, b, c;
	int maior;

	printf("Informe 3 numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a>b && a>c){
		maior=a;
	}
	else if(b>a && b>c){
		maior=b;
	}
	else{
		maior=c;
	}
	
	printf("O maior numero informado eh: %d", maior);
	
	
	return 0;
}
