#include <stdio.h>
int main (){
	
	float media=0;
	int n, n1, x;
	
	printf("Digite N: ");
	scanf("%d", &n);
	
	n1=0;
	

	while(n1<n){
		printf("Digite X: ");
		scanf("%d", &x);
		
		media = media+x;
		n1++;
	}
	
	printf("A media de todos esses valores eh: %f", media/n);
	
	
	
	
	
	return 0;
}
