#include <stdio.h>
int main (){
	
	int i;
	
	for(i=1;i<=500;i++){
		if(i%11==0 && i%13==0){
			printf("Valor encontrado = %d", i);
			return 0;
		}
		else {
			printf("Valor não encontrado");
		}
	}
	
	
	
	
	
	
	return 0;
}
