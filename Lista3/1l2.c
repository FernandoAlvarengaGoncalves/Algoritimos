#include <stdio.h>
int main (){
	
	
	int a, b, c;
	
	printf("Informe os lados do triangulo: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a+b>c && a+c>b && b+c>a){
		printf("Os tres lados formam um triangulo!\n");
		if(a==b && b==c){
			printf("Triangulo Equilatero");
		}
		else if(a==b || a==c || b==c){
			printf("Triangulo Isosceles");
		}
		else if(a!=b && a!=c && b!=c){
			printf("Triangulo Escaleno");
		}
	}
	
	else{
		printf("Os tres lados nao formam um triangulo!");
	}
	
	
	
	
	
	return 0;
}
