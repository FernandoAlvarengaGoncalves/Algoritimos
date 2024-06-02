# include <stdio.h>
	
	int	main (){
		
	int A;
	double B;	
		
	scanf("%d", &A);
	scanf("%lf", &B);
	
	float dist;
	
	dist = A/B;
	
	printf("%.3f km/l\n", dist);
		
			
		return 0;
	}
