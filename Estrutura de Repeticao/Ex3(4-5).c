#include <stdio.h>
int main (){
	
	int a, b;
	
	printf("Informe valor um: ");
	scanf("%d", &a);
	
	printf("Informe valor dois: ");
	scanf("%d", &b);
	
	if (a<b){
		while(a<b){
			printf("%d\n", a);
			a++;
		}
	}
	else if(a>b){
		while(a>b){
			printf("%d\n", b);
			b++;
		}
	}
	
	else
		printf("Valores iguais");
	
	
	
	
	return 0;
}
