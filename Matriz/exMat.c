#include <stdio.h>
int main (){
	
	//Exercicio feito no youtube onde � solicitado que se crie um programa que pede ao user digitar 4 notas de 0 a 10 (float) de 4 alunos e os valores devem ser armazenados em uma matriz bidimensional.
	//Fa�a a m�dia das notas de cada aluno e armazene as 4 m�dias em um vetor. Por �ltimo, coloque na tela do user uma msg informando a m�dia de cada aluno.
	
	float matriz [4][4];
	float vetor [4];
	float media=0;
	
	int i,j;
	
	
	
	for(i=0;i<4;i++){
		printf("Digite as 4 notas do %d aluno: \n", i+1);	
		for(j=0;j<4;j++){	
			scanf("%f", &matriz[i][j]); //armazena os dados em todas linhas e colunas da matriz
			media=media+matriz[i][j]; //adciona o total das notas em media
		}
		vetor[i]=media/4; //acumula as notas na variavel media
		media=0; //zera a variavel para come�ar outro armazenamento
	}
	
	for(i=0;i<4;i++){ //loop para imprimir o resultado de cada indice do vetor
		printf("A media do aluno %d eh %.2f\n", i+1, vetor[i]);
	}
	
	
	
	
	return 0;
}
