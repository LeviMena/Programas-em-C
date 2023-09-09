#include <stdio.h>

int main(void) {
  
  float dolar,real;
  printf("Qual a cotação do dólar de hoje? ");
  scanf("%f",&dolar);

  printf("Quantos reais você deseja converter? ");
  scanf("%f",&real);

  printf("Isso vale %.2f dólares",real/dolar);
  
  return 0;
}
