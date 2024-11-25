#include <stdio.h>
int main (){
	
	int i=0, j=0, j1=0, j2=0, j3=0, pontos[3][5];
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d", &pontos[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(i==0 && j<5){
				j1+=pontos[i][j];
			}
			if(i==1 && j<5){
				j2+=pontos[i][j];
		}
			if(i==2 && j<5){
				j3+=pontos[i][j];
			}
		}
	}
	
	if(j1>j2&&j1>j3){
		printf("Jogador 1 fez mais pontos.\n");
	}
	 else if(j2>j1&&j2>j3){
		printf("Jogador 2 fez mais pontos.\n");
	}
	
	 else if(j3>j1&&j3>j2){
		printf("Jogador 3 fez mais pontos.\n");
	}
	
  for(i = 0; i < 3; i++) {
        printf("Jogador %d: ", i + 1);
        for(j = 0; j < 5; j++) {
            printf("[ %d ] ", pontos[i][j]);
        }
        if (i == 0) {
            printf("TOTAL = %d Pontos\n", j1);
        } else if (i == 1) {
            printf("TOTAL = %d Pontos\n", j2);
        } else if (i == 2) {
            printf("TOTAL = %d Pontos\n", j3);
        }
    }
	return 0;
}
