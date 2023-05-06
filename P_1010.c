#include <stdio.h>

int main() {
  int codigo_peca_1, numero_peca_1, codigo_peca_2, numero_peca_2;
  float valor_unitario_peca_1, valor_unitario_peca_2, valor_total;


  printf("Digite o código da peça 1: ");
  scanf("%d", &codigo_peca_1);
  printf("Digite o número de peças 1: ");
  scanf("%d", &numero_peca_1);
  printf("Digite o valor unitário da peça 1: ");
  scanf("%f", &valor_unitario_peca_1);

  printf("Digite o código da peça 2: ");
  scanf("%d", &codigo_peca_2);
  printf("Digite o número de peças 2: ");
  scanf("%d", &numero_peca_2);
  printf("Digite o valor unitário da peça 2: ");
  scanf("%f", &valor_unitario_peca_2);

  valor_total = (numero_peca_1 * valor_unitario_peca_1) + (numero_peca_2 * valor_unitario_peca_2);

  printf("O valor total a ser pago é: R$ %.2f\n", valor_total);

  return 0;
}
