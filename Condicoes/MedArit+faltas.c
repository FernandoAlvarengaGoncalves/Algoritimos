#include <stdio.h>
int main (){
	
	double prova1, prova2, m_arit;
	int faltas;
	
	printf("Digite a nota da P1: ");
	scanf("%lf", &prova1);
	
	printf("Digite a nota da P2: ");
	scanf("%lf", &prova2);
	
	
	printf("Informe o numero de faltas: ");
	scanf("%d", &faltas);
	
	m_arit = (prova1+prova2) / 2;
	
	if (faltas<=12 && m_arit>=6.0){
		printf("Aluno APROVADO");
	}
	
	else {
		printf("Aluno REPROVADO");
	}
	
	
	
	
	
	
	return 0;
}

