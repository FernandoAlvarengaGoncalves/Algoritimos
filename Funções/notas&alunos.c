#include <stdio.h>

#define alunos 3
#define notas 5

void lerNotas(float provas[alunos][notas]);

void calcularMedia(float provas[alunos][notas], float media[alunos]);


int main (){
	
	
	float provas[alunos][notas] = {0.0};
	float media[alunos] = {0.0};
	
	lerNotas(provas);
	calcularMedia(provas, media);	
	
	return 0;
}


void lerNotas(float provas[alunos][notas]){
	
	int i, j;
	
	for (i=0;i<alunos;i++){
		printf("Digite as notas do aluno %d ---> \n", i + 1);
		
		for(j=0;j<notas;j++){
			printf("Nota %d: ", j+1);
			scanf("%f", &provas[i][j]);
		}
	}
	
	
}

void calcularMedia(float provas[alunos][notas], float media[alunos]){
	
	int i, j;
	
	for(i=0;i<alunos;i++){
		
		float soma = 0.0;
		
		for(j=0;j<notas;j++){
			soma += provas[i][j];
		
		}
		media[i] = soma / (float)notas;
		
		if(media[i] >= 7.0){
            printf("Aluno %d esta APROVADO - media final: %.2f!\n", i + 1, media[i]);
        } else if(media[i] >= 3.0){
            printf("Aluno %d esta de EXAME - media final: %.2f!\n", i + 1, media[i]);
        } else {
            printf("Aluno %d esta REPROVADO - media final: %.2f!\n", i + 1, media[i]);
	}
		
	
	}
}















