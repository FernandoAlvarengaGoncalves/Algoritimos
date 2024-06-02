#include <stdio.h>
int main(){
	
	int horas, number;
	double valorhora, salary;
	
	scanf("%d", &number);
	scanf("%d", &horas);
	scanf("%lf", &valorhora);
	
	
	
	
	salary = horas * valorhora;
	
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2lf\n", salary);
	
	return 0;
}
