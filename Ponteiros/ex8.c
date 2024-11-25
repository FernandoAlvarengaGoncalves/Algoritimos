#include <stdio.h>

int main (){
	
	int x = 8;
	x++;
	int *y = &x;
	
	printf("Conteudo do ponteiro Y : %p\n", y);
	
	y = y + 1;
	
	printf("Conteudo do ponteiro Y apos y = y + 1 : %p\n", y);
	
	printf("Conteudo de X :%d\n", x);
	
	
	return 0;
}
