#include <stdio.h>
int main (){
	
	int n, i;
	
	for(i=1;i<=100;i++){
		if(i%2==0){
			n=n+i;
		}
	}
	
	printf("A soma dos pares eh: %d", n);
	
	
	
	
	
	return 0;
}

