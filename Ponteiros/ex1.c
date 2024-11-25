#include <stdio.h>


int main (){
	
	int x = 3, y = 1;
	int *p;
	
	//atribuição básica ponteiro
	p = &x;
	y = *p;
	
	printf("X  = %d / Y = %d\n", x, y);
	
	//para saber o endereco onde o ponteiro aponta, usar (*void)
	printf("PTR P = %p\n", (void*)p);
	printf("endereco de P = %p", &p);
	
	
	return 0;
	
}
