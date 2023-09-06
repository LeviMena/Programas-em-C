#include <stdio.h>

int main() {

  float comprimento, altura, largura;
  
  printf("Qual o comprimento da caixa em metros? ");
  scanf("%f",&comprimento);
  printf("Qual a largura da caixa em metros? ");
  scanf("%f",&largura);
  printf("Qual a altura da caixa em metros? ");
  scanf("%f",&altura);

  printf("O volume da caixa será de: %.2f metros³ \n",altura*comprimento*largura);
  
  return 0;
}
