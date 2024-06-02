#include <stdio.h>
 
int main() {
 
  int cod1, n1; 
  float valor1;
  
  int cod2, n2;
  float valor2;
  
  scanf("%d %d %f", &cod1, &n1, &valor1);
  scanf("%d %d %f", &cod2, &n2, &valor2);
  
  float total = (n1*valor1 + n2*valor2);
  
  printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}


