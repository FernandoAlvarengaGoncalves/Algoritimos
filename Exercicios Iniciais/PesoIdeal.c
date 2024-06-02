#include <stdio.h>
int main (){
	
	double peso, altura;
	char sexo;
	
	printf("Informe M ou F, para masculino ou feminino: ");
	
	scanf("%s", &sexo);
	
	printf("Informe sua altura: ");
	
	scanf("%lf", &altura);
	
	if (sexo == 'M'){
		peso = (72.7*altura) - 58;
		printf("Peso ideal com relacao a sua altura eh de: %lf", peso);
	}
	else if (sexo =='F'){
		peso = (62.1*altura) - 44.7;
		printf("Peso ideal com relacao a sua altura eh de: %lf", peso);
	}
	else {
		printf("Sexo invalido");
	}
	
	
	
	
	
	return 0;
}
