#include <stdio.h>

int main() {
  float dias;
  printf("Quantos dias o funcionário trabalhou? \n");
  scanf("%f",&dias);

  if (dias <= 10) {
    printf("Seu salário será de: %.2f", dias*50.25*0.9);
  } else if (dias <= 20) {
    printf("Seu salário será de: %.2f", (dias*50.25*1.2)*0.9);
  } else {
    printf("Seu salário será de: %.2f", (dias*50.25*1.3)*0.9);
  }

  return 0;
}  