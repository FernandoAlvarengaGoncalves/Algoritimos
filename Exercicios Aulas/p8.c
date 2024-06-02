#include <stdio.h>
int main (){
	
	int a, b, i;
	
	printf("Digite o valor um: ");
	scanf("%d", &a);
	
	printf("Digite o valor dois: ");
	scanf("%d", &b);
	
	if(a<b){
		for(i=a;i<=b;i++){
			printf("%d ", i);
		}
	}
	else if(a>b){
		for(i=b;i<=a;i++){
			printf("%d ", i);
		}
	}
	
	else{
		printf("Valores iguais");
	}
	
	return 0;
}

