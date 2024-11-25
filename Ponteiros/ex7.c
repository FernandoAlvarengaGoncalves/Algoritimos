#include <stdio.h>

int main (){
	
	
	int x = 8;
	
	x++;
	
	//em c, um ponteiro deve ser inicializado e atribuido no mesmo momento
	int *y = &x;
	
	*y = *y + 1;
	
	printf("%d", x);
	
	
	
	return 0;
}
