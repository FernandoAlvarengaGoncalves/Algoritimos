#include <stdio.h>

int mult (int n1, int n2);


int main (){
	int produto=mult(10,5);
	printf("Resultado = %d", produto);
}

int mult (int n1, int n2){

	return n1 * n2;
}
