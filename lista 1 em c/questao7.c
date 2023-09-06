#include <stdio.h>

int main() {
  
  int horas, minutos, segundos;
  printf("Quantas horas se passaram?\n");
  scanf("%d", &horas);

  printf("Quantos minutos se passaram?\n");
  scanf("%d", &minutos);

  printf("Quantos segundos se passaram?\n");
  scanf("%d", &segundos);

  printf("Ao todo se passaram: %d segundos.",horas*3600+minutos*60+segundos);

  return 0;
}