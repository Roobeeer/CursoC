#include <stdio.h>
#include <math.h>
double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
double elevar(double base, double exponente);
int main() {
    int opcion;
    double a, b;
    printf("Introduce la operacion que deseas realizar :\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Elevar\n6. Salir\nOpcion : ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            suma(a,b);
        break;
        case 2:
            resta(a,b);
        break;
        case 3:
            multiplicacion(a,b);
        break;
        case 4:
            division(a,b);
        break;
        case 5:
            elevar(a,b);
        break;
        default : printf("Opcion incorrecta");

    }

}

double suma(double a, double b) {
    printf("Introduce los valores que deseas sumar\n");
    printf("OP1 :");
    scanf("%lf", &a);
    printf("OP2 : ");
    scanf("%lf", &b);
    double resultado = a+b;
    printf("El resultado es : %.2lf",resultado);
}

double resta(double a, double b) {
    printf("Introduce los valores que deseas restar\n");
    printf("OP1 :");
    scanf("%lf", &a);
    printf("OP2 : ");
    scanf("%lf", &b);
    double resultado = a-b;
    printf("El resultado es : %.2lf",resultado);
}

double multiplicacion(double a, double b) {
    printf("Introduce los valores que deseas multiplicar\n");
    printf("OP1 :");
    scanf("%lf", &a);
    printf("OP2 : ");
    scanf("%lf", &b);
    double resultado = a*b;
    printf("El resultado es : %.2lf",resultado);
}

double division(double a, double b) {
    printf("Introduce los valores que deseas dividir\n");
    printf("OP1 :");
    scanf("%lf", &a);
    printf("OP2 :z    ");
    scanf("%lf", &b);
    if(b == 0) {
        printf("La operacion entre 0 no se puede realizar.");
    }else {
        double resultado = a/b;
        printf("El resultado es : %.2lf",resultado);

    }
}

double elevar(double a, double b) {
    printf("Introduce los valores que deseas elevar\n");
    printf("Base :");
    scanf("%lf", &a);
    printf("Exponente : ");
    scanf("%lf", &b);
    double resultado = pow(a,b);
    printf("El resultado es : %.2lf",resultado);

}
