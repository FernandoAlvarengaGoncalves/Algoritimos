#include <stdio.h>

int main (){
	
	char var1;
	int var2;
	double var3;
	char *ptr1;
	int *ptr2;
	double *ptr3;
	
	//exibir tamanho das variaveis
	printf("Tamanho das variaveis: \n");
	printf("char: %ld bytes\n", sizeof(var1));
	printf("int :%ld bytes \n", sizeof (var2));
	printf("double :%ld bytes \n", sizeof (var3));
	
	//exibir tamanho dos ponteiros
	printf("Tamanho dos ponteiros: \n");
	printf("char ponteir: %ld bytes \n", sizeof (ptr1));
	printf("int pointer: %ld bytes \n", sizeof (ptr2));
	printf("double pointer: %ld bytes \n", sizeof (ptr3));	
	
	
	
	return 0;
}
