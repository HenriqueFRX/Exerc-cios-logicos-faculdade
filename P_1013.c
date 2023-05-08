#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, maiorAB, maiorABC;

  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  maiorAB = (a + b + fabs(a - b)) / 2;
  maiorABC = (maiorAB + c + fabs(maiorAB - c)) / 2;

  printf("%.f eh o maior\n", maiorABC);

  return 0;
}
