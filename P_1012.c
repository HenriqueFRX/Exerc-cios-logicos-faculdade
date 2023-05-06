#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
   printf("Digite os valores: ");
    scanf("%lf %lf %lf", &a, &b, &c);


    double area_triangulo = (a * c) / 2;


    double area_circulo = M_PI * pow(c, 2);

    double area_trapezio = ((a + b) * c) / 2;

    double area_quadrado = pow(b, 2);

    double area_retangulo = a * b;

    printf("TRIANGULO: %.2lf\n", area_triangulo);
    printf("CIRCULO: %.2lf\n", area_circulo);
    printf("TRAPEZIO: %.2lf\n", area_trapezio);
    printf("QUADRADO: %.2lf\n", area_quadrado);
    printf("RETANGULO: %.2lf\n", area_retangulo);

    return 0;
}
