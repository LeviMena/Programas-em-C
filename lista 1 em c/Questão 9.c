#include <stdio.h>

int main() {
  
  int valor;
  printf("Qual o valor desejado? ");
  scanf("%d", &valor);
  
  printf("O antecessor deste valor será: %d \n",valor-1);
  printf("O sucecessor deste valor será: %d \n",valor+1);
  
  return 0;
}
