#include <stdio.h>

int main (){
	
	int n = 507;
	int *pt1 = &n;
	
	//impressões básicas
	//sempre que for imprimir conteudo de um ptr, usar %p
	
	printf("Conteudo de N = %d\n", n);
	printf("Endereco de N = %p\n", &n);
	printf("Conteduo de Pt1 = %p\n", pt1);
	printf("Endereco de Pt1 = %p\n", &pt1);
	
	
	
	
	return 0;
}

