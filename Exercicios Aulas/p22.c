#include <stdio.h>
int main (){
	
	
	int n, s=42;
	
	printf("Advinhe o numero: ");
	scanf("%d", &n);
	
	for(s=42;s!=n;){
		printf("Numero incorreto, try again: ");
		scanf("%d", &n);
	}
	
	printf("Voce acertou!, o numero era: %d", s);
	
	
	
	return 0;
}

