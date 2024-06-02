#include <stdio.h>
int main (){
	
	int n1=0, c=0;
	
	printf("Qual numero vc deseja gerar a tabuada?: ");
	scanf("%d", &n1);
	
	do {
		printf("%d x %d = %d\n", n1, c, n1*c);
		c++;
	} while (c<=25);
	

	
	
	
	
	
	
	
	return 0;
}
