#include <stdio.h>

int main (){
	
	int x = 10;
	int *y = &x;
	int *z = &x;
	
	//operação com o conteudo dos ponteiros e atribuindo valor a variavel c
	int c = *y + *z;
	
	*y = c;
	
	printf("%d\n", x);
	
	
	
	
	return 0;
}
