#include <stdio.h>
int main (){
	
	float altura, p_ideal;
	char sexo [2];
	
	printf("Digite o sexo M ou F: ");
	scanf("%s", sexo);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	if(sexo=='M'){
		p_ideal = (72.7*altura)-58;
		printf("peso ideal: %f", p_ideal);
		
	}else
		p_ideal = (62.1*altura)-44.7;
		printf("peso ideal: %f", p_ideal);
		
	
	
	
	
	
	
	
	return 0;
}
