#include <stdio.h>

int main(void) {

  int A, B, C, D, diferenca;

  printf("Digite o primeiro valor: ");
  scanf("%d", &A);

  printf("Digite o segundo valor: ");
  scanf("%d", &B);

  printf("Digite o terceiro valor: ");
  scanf("%d", &C);

  printf("Digite o quarto valor: ");
  scanf("%d", &D);

  diferenca = (A * B - C * D);

  printf("DIFERENCA = %d\n", diferenca);

  return 0;
}
