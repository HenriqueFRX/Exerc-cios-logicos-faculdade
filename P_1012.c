#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
 
    scanf("%lf %lf %lf", &a, &b, &c);


    double area_triangulo = (a * c) / 2;


    double area_circulo = 3.14159 * pow(c, 2);

    double area_trapezio = ((a + b) * c) / 2;

    double area_quadrado = pow(b, 2);

    double area_retangulo = a * b;

    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}
