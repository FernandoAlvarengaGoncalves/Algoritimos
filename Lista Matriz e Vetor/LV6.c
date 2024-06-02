#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int i, vetA[10], vetB[10];
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		vetA[i]=rand()%21;
	}
	
	for(i=0;i<10;i++){
		vetB[i]=vetA[i];
	}
	
	for(i=0;i<10;i++){
		printf("[%d] ", vetB[i]);
	}
	
	return 0;
}
