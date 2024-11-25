#include <stdio.h>

#define PROVAS 5

void lerNotas(double notas[]);
double calculaMedia(double notas[]);
void menorEmaior(double notas[]);

int main (){
	
	double notas[PROVAS];
	
	lerNotas(notas);
	calculaMedia(notas);
	menorEmaior(notas);
	
	return 0;
}

void lerNotas(double notas[]){
	
	int i;
	double total = 0;
	
	for(i = 0; i < PROVAS; i++){
		printf("Informe a %d nota do aluno: \n", i + 1);
		scanf("%lf", &notas[i]);
		total += notas[i];
	}
	
}

double calculaMedia(double notas[]){
	
	double total = 0;
	int i;
	
	for(i = 0; i < PROVAS; i++){
		total+= notas[i];
	}
	
	double media = total / PROVAS;
	
	if(media >= 7.0){
		printf("O aluno atingiu a media: %.2lf e esta Aprovado\n", media);
		
	}
	else if(media < 7.0 && media >=3.0){
		printf("O aluno atingiu a media: %.2lf e esta de Exame\n", media);
	}
	else{
		printf("O aluno atingiu a media: %.2lf e esta Reprovado\n", media);
	}
	
	return media;
}

void menorEmaior(double notas[]){
	
	int i, c = 0, cc = 0;
	
	double maior = notas[0];
	double menor = notas[0];
	
	for(i = 0; i < PROVAS; i++){
		if(notas[i] > maior){
			maior = notas[i];
			c = i;
		}
		if(notas[i] < menor){
			menor = notas[i];
			cc = i;
		}
		
	}
	
	printf("\nA %d prova do aluno foi a maior nota: %.2lf\n", c + 1, maior);
	printf("\nA %d prova do aluno foi a menor nota: %.2lf", cc + 1, menor);
		
}
