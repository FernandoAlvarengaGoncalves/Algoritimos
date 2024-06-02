#include <stdio.h>
int main (){
	
	int a, b, c;
	int menor;

	printf("Informe 3 numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a<b && a<c){
		menor=a;
	}
	else if(b<a && b<c){
		menor=b;
	}
	else{
		menor=c;
	}
	
	printf("O menor numero informado eh: %d", menor);
	
	
	return 0;
}
