#include <stdio.h>
int main (){
	
	int l1, l2, l3;
	
	printf("Digite os 3 lados do triangulo:\n\n");
	scanf("%d", &l1);
	scanf("%d", &l2);
	scanf("%d", &l3);
	
	//Verifica se os números são positivos
	if(l1<0 || l2<0 || l3<0){
		printf("Numeros invalidos!\n");
	}
	
	//Verifica se os lados formam um triângulo	
	if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2){
		printf("\nOs tres lados formam um triangulo!\n\n");
		
		if(l1==l2 && l1==l3){
			printf("Triangulo Equilatero!\n");
		}
		else if(l1==l2 || l1==l3 || l2==l3){
			printf("Triangulo Isosceles\n");
		}
		else{
			printf("Escaleno\n");
		}
	}
	else{
			printf("Os 3 lados nao formam um triangulo");
		}
	

	
	
	return 0;
}
