#include <stdio.h>

int main(void) {

double notaA, notaB , media;

  printf("Digite a primeira nota: ");
  scanf("%lf", &notaA);
  
  printf("Digite a segunda nota: ");
  scanf("%lf", &notaB);

  media = (notaA*3.5 + notaB*7.5) / (3.5 + 7.5);
  printf("MEDIA = %.5lf\n", media);
 
  return 0;
}
