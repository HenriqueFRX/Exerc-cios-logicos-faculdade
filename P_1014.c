#include <stdio.h>
#include <math.h>

int main() {
  float  X, Y, kmTOTAL;

  printf("Digite o kilometragem total: ");
  scanf("%f", &X);
  printf("Digite o total de combustivel gasto: ");
  scanf("%f", &Y);

  kmTOTAL = X / Y;

  printf("%.3f km/l\n", kmTOTAL);

  return 0;
}
