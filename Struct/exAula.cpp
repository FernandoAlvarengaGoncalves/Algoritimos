//Passagem de Structs por Referência

#include <stdio.h>


typedef struct {
	
	float peso;
	int idade;
	float altura;
		
}pessoa;

void imprimepessoa(pessoa p);
void setpessoa(pessoa *p, int idade, float peso, float altura);

int main (){
	
	pessoa Joao, p1;
	setpessoa(&Joao, 15, 70.5, 1.75);
	imprimepessoa(Joao);
	setpessoa(&p1, 25, 60.5, 1.65);
	imprimepessoa(p1);
	printf("\n Local idade: %d / peso: %.2f / altura: %.2f\n", p1.idade, p1.peso, p1.altura);
	return 0;
}

void imprimepessoa(pessoa p){
	printf("idade: %d / peso: %.2f / altura: %.2f\n", p.idade, p.peso, p.altura);
}

void setpessoa(pessoa *p, int idade, float peso, float altura){
	p->idade = idade+2;
	p->peso = peso;
	p->altura = altura;
}
