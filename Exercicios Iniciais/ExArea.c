# include <stdio.h>
# define PI 3.14159
	int main (){
		
		double A, B, C;
		
		printf("Informe os tres lados: \n");
		
		scanf("%lf", &A);
		scanf("%lf", &B);
		scanf("%lf", &C);
		
		double ATR;
		ATR = (A*C)/2;
		printf("TRIANGULO: %.3lf\n", ATR);
		
		double AC;
		AC = PI*C*C;
		printf("CIRCULO: %.3lf\n", AC);	
		
		double ATRAPE;
		ATRAPE = ((A+B)*C)/2;
		printf("TRAPEZIO: %.3lf\n", ATRAPE);
		
		double AQDR;
		AQDR = B*B;
		printf("QUADRADO: %.3lf\n", AQDR);
		
		double ART;
		ART = B*A;
		printf("RETANGULO: %.3lf", ART);
		
		
		
		return 0;
	}
