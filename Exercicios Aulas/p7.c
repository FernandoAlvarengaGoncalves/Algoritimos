#include <stdio.h>
int main (){
	
	int i;
	
	for(i=1;i<=500;i++){
		if(i%11==0 && i%13==0){
			printf("* ");
			break;
		}
		else{
			printf("%d ", i);
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}

