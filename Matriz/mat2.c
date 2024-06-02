#include <stdio.h>
int main (){
	
	int matriz [5][5]={11,12,13,14,15,
					   16,17,18,19,20,
					   21,22,23,24,25,
					   26,27,28,29,30,
					   31,32,33,34,35};
	
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
