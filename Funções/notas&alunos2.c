#include <stdio.h>

#define ALUNOS 3
#define NOTAS 5

typedef struct {
	char nome[50];
	float notas[NOTAS];
	float media;
	
} Aluno;

void lerAluno(Aluno *aluno);
void calcularMedia(Aluno *aluno);

int main (){
	
	Aluno vetAlunos[ALUNOS];
	
	int i;
	
	for(i = 0; i < ALUNOS; i++){
		printf("Digite os dados do aluno %d: \n", i + 1);
		lerAluno(&vetAlunos[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < ALUNOS; i++){
		calcularMedia(&vetAlunos[i]);
	}

	
	return 0;
}

void lerAluno(Aluno *aluno){
	
	printf("Nome: ");
	scanf("%s", aluno->nome);
	
	int i;
	
	for(i = 0; i < NOTAS; i++){
		while(1){
		
			printf("Nota %d ", i + 1);
			scanf("%f", &aluno->notas[i]);
			
			if(aluno->notas[i] >= 0 && aluno->notas[i] <= 10){
				break;
			}else{
				printf("Nota incorreta!, Insira uma nota entre 0 e 10.\n");
			}
		}
	}
		
}


void calcularMedia(Aluno *aluno){
	float soma = 0.0;
	
	int i;
	
	for(i = 0; i < NOTAS; i++){
		soma += aluno->notas[i];
	}
	
	aluno->media = soma / (float)NOTAS;
	
	if (aluno->media >= 7.0) {
        printf("Aluno(a) %s esta APROVADO - media final: %.2f!\n", aluno->nome, aluno->media);
    } else if (aluno->media >= 3.0) {
        printf("Aluno(a) %s esta de EXAME - media final: %.2f!\n", aluno->nome, aluno->media);
    } else {
        printf("Aluno(a) %s esta REPROVADO - media final: %.2f!\n", aluno->nome, aluno->media);
    }
	
}

