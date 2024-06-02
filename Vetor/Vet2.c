#include <stdio.h>
int main (){
	
	float nota[5]={0};
	float media=0;
	float total=0;
	
	printf("insira 5 notas: \n");
	
	int i;
	
	for (i=0;i<5;i++){
		scanf("%f", &nota[i]);
		total=total+nota[i];
	}
	
	
	media=total/5;
	
	printf("A media do aluno eh: %.1f", media);	
	
	
	
	
	
	return 0;
}
