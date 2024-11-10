#include <stdio.h>
//void iguales(int n1, int n2);
int main() {

    int numeros [3] = {1};

    printf("Introduce los elementos de la matriz");
    int n;

    for (int i = 1; i < sizeof(numeros)/sizeof(numeros[0]); ++i) {
        printf("\nElemento %d : ",i);
        scanf("\n%d", &n);
        numeros[i] = n;
    }
    printf("Elementos de la matriz : ");
    for (int i = 0; i < sizeof(numeros)/sizeof(numeros[0]); ++i) {
        printf("%d ", numeros[i]);
    }
  /*  double n1, n2;
    printf("Introduce dos numeros para comprobar si son iguales\n");
    printf("Numero 1: ");
    scanf("%lf",&n1);
    printf("%c\n");
    printf("Numero 2: ");
    scanf("%lf",&n2);
    iguales(n1, n2);
    */
    return 0;
}

/*void iguales(int n1, int n2) {
    if(n1==n2) {
        printf("Los numeros son iguales");
    }else {
        printf("Los numeros son diferentes");
    }
    */
