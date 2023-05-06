#include <stdio.h>

int main() {

float volume, raio;
  
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  volume = 4/3.0 * 3.14159 * (raio * raio * raio); 
  
  printf("VOLUME = %.3f\n", volume);
  
return 0;
}
