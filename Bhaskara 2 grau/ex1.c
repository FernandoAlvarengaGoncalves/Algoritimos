#include <stdio.h>

//Bhaskara

void calcBask(float a, float b, float c);

int main (){
	
	float a = 0, b = 0, c = 0;
	
	printf(" Informe os valores de a, b e c\n "
		"para que seja calculado as raizes da equação\n "
		"de segundo grau usando a formula de Bhaskara: \n");
	
	scanf("%f %f %f", &a, &b, &c);
	
	
	calcBask(a, b, c);
	
	
	
	return 0;
}

void calcBask(float a, float b, float c){
	
	float delta = 0;
	
	delta = b*b - 4*a*c;
	
	
	return delta;
	
}
