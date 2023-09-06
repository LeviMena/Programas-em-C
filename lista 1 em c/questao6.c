#include <stdio.h>

int main() {

  float altura;
  printf("Qual a sua altura em metros? \n");
  scanf("%f",&altura);

  int peso;
  printf("Qual seu peso em kg? \n");
  scanf("%d",&peso);

  char sexo;
  printf("Qual seu sexo (M ou F)? \n");
  scanf(" %c",&sexo);

  if (sexo == 'M') {
    printf("Seu peso ideal será de: %2.f",72.5*altura-58);
  } else if (sexo == 'F') {
    printf("Seu peso ideal será de: %2.f",62.1*altura-44.7);
  } else {
    printf("Entrada inválida");
  }
  
  return 0;
}