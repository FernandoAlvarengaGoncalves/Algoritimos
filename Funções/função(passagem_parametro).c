#include <stdio.h>

double quadrado (double abacaxi);


void main (void){
	
	double y, z = 3.5;
	
	y = quadrado (z);
	printf ("%f %f", z, y);
	
}

double quadrado (double z){
	z = z*z;
	return z;
}
