#include <stdio.h>
int main (){
	
	int i=1, n;
	
	printf("Digite ate qual num deve ser impresso: ");
	scanf("%d", &n);
	
	while(i<=n){
		printf("%d\n", i);
		i++;
	}
	
	
	
	
	return 0;
}
