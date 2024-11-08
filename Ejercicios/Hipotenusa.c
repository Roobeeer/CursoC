#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Introduce los valores de los catetos\n");
    printf("Cateto1: ");
    scanf("%lf",&a);

    printf("Cateto2: ");
    scanf("%lf",&b);
    double hipotenusa = (sqrt(a*a+b*b));
    printf("El valor de la hipotenusa es %lf",hipotenusa);


    return 0;
}