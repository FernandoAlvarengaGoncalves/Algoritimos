#include <stdio.h>
int main (){
	
	
	int x = 2;
	int *y = &x;
	
	//alterando o conteudo de x com *y
	*y = 3;
	
	
	printf("%d\n", x);
	
	
	
	return 0;
}
