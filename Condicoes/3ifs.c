#include <stdio.h>
int main (){
	
	float p1, p2, p3, media;
	
	printf("Digite a nota da p1: ");
	scanf("%f", &p1);
	
	printf("Digite a nota da p2: ");
	scanf("%f", &p2);
	
	printf("Digite a nota da p3: ");
	scanf("%f", &p3);
	
	media = (p1+p2+p3)/3;
	
	printf("A media final foi: %f", media);
	
	if (p1<media){
		printf("A nota de p1 foi menor que a media");
		
	}
	if (p2<media){
		printf("A nota de p2 foi menor que a media");
	}
	if (p3<media){
		printf("A nota de p3 foi menor que a media");
	}
	
	return 0;
}
