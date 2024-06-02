#include <stdio.h>
int main (){
	
	int i;
	
	for(i=1;i<=100;i++){
		if(i%6==0){
			printf("* ");
		}
		if(i%6!=0){
			printf("%d ", i);
		}
	}
	
	
	
	
	
	
	return 0;
}
