#include <stdio.h>
#include "NotasAlumno.h"



int main()
{
    printf("Introduce las notas : \n");
    double n1,n2,n3;
    printf("Nota1 : ");
    scanf("%lf",&n1);
    printf("\nNota2 : ");
    scanf("%lf",&n2);
    printf("\nNota3 : ");
    scanf("%lf",&n3);
    double array[] = {n1,n2,n3};
    int tamanyo = sizeof(array) / sizeof(array[0]);
    mediaAlumnos(array,tamanyo);




    return 0;
}

double mediaAlumnos(double notas[], int tamanyo)
{
    double suma = 0;
    for (int i = 0; i < tamanyo; ++i)
    {
        suma+= notas[i];
    }
    double media =  suma/tamanyo;

    printf("Media : %.2lf",media);
}
