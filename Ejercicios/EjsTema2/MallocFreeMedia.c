#include <stdio.h>
#include <stdlib.h>
/*
*. Memoria dinámica con malloc y free
Escribe un programa que pida al usuario el tamaño de un arreglo.
Utiliza malloc para reservar memoria dinámica para el arreglo y luego pide al usuario que llene el arreglo con valores enteros.
Calcula la suma y el promedio de los valores ingresados.
Libera la memoria reservada.
 */
int main()
{

    printf("Introduce un tamanyo para el array : ");
    int tamanyo;
    scanf("%d",&tamanyo);

    int *array = (int*)malloc(tamanyo*sizeof(int));
    int suma;
    double media;
    printf("Introduce los valores del array\n");
    for(int i = 0;i<tamanyo;i++)
    {
        printf("Valor %d : ",i+1);
        scanf("%d",&array[i]);
        suma+= array[i];
    }

    media = suma/tamanyo;

    printf("La media es : %.2lf\n",media);
    printf("La suma total es : %d",suma);

    free(array);


    return 0;
}