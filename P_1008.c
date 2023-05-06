#include <stdio.h>

int main(void) {

  int num, horas; 
  double salario, sal;

  printf("Digite o numero de funcionario: ");
  scanf("%d", &num);

  printf("Digite o numero de horas trabalhadas: ");
  scanf("%d", &horas);

  printf("Digite o valor da hora trabalhada: ");
  scanf("%lf", &sal);

  salario = (horas * sal);
   printf("NUMBER = %d\n", num);
   printf("SALARY = U$ %.2lf\n", salario);

  return 0;
}
