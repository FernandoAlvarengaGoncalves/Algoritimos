#include <stdio.h>
int main (){
	
	int l, c;
	
	l=1; 
	
	
	while(l<=10) {
		c=1;

		while(c<=l){
			printf("*");
			c=c+1;
		}
		printf("\n");
		l=l+1;
		
	
	}
	
	
	
	
	
	
	return 0;
}
