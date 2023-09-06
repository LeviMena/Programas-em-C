#include <stdio.h>

int main(void) {
  
  float custo;
  printf("Olá, quanto custou sua comida? ");
  scanf("%f", &custo);

  printf("O valor que você terá que pagar será de: %.2f", custo*1.1);
  
  return 0;
}