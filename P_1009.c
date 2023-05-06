#include <stdio.h>

int main() {
  char nome[50];
  float salario_fixo, total_vendas, comissao, salario_total;


  printf("Digite o nome do vendedor: ");
  scanf("%s", nome);
  printf("Digite o salário fixo: ");
  scanf("%f", &salario_fixo);
  printf("Digite o total de vendas efetuadas: ");
  scanf("%f", &total_vendas);


  comissao = 0.15 * total_vendas;
  salario_total = salario_fixo + comissao;

  
  printf("TOTAL = R$ %.2f\n", nome, salario_total);

  return 0;
}
