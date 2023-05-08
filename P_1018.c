#include <stdio.h>

int main() {
int N;

  scanf("%d", &N);
  
  printf("%d\n", N);
  printf("%d nota(s) de 100 R$\n", N/100);
  N = N%100;
  printf("%d nota(s) de 50 R$\n", N/50);
  N = N%50;
  printf("%d nota(s) de 20 R$\n", N/20);
  N = N%20;
  printf("%d notas(s) de 10 R$\n", N/10);
  N = N%10;
  printf("%d nota(s) de 5 R$\n", N/5);
  N = N%5;
  printf("%d nota(s) de 2 R$\n", N/2);
  N = N%2;
  printf("%d nota(s) de 1 R$\n", N/1);
  N = N%1;
  
    return 0;
}
