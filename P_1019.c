#include <stdio.h>

int duracaoSegundosParaHoras(int segundos) {
    return segundos / 3600;
}

int duracaoSegundosParaMinutos(int segundos) {
  return (segundos % 3600) / 60;
}

int duracaoSegundosparaSegundos(int segundos) {
  return segundos % 60;
}
int main() 
{
    int N;

    scanf("%d", &N);

    printf("%d:%d:%d\n", duracaoSegundosParaHoras(N), 
    duracaoSegundosParaMinutos(N), 
    duracaoSegundosparaSegundos(N));

return 0;
}
