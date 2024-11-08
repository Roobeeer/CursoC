#include <stdio.h>

int main() {

        const double PI = 3.141592653589793;
        double radio;
    double circunferencia;
    double area;

    printf("Introduce el radio de un circulo : \n");
    scanf("%lf",&radio);

    area = PI*radio*radio;
    circunferencia = PI * PI * radio;
    printf("Circunferencia : %lf\nArea: %lf",circunferencia,area);
    return 0;
}