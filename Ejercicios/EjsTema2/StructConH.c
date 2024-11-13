
#include "StructConH.h"
#include <stdio.h>


int main()
{
    int tamanyo = 2;
    struct Estudiante estudiantes[tamanyo];

    char name[40];
    int edad;
    double promedio;
    printf("Introduce el nombre, la edad y su nota media");
    for(int i = 0; i<tamanyo;i++)
    {
        printf("\nEstudiante %d : ",i+1);
        scanf("%s",&name);
        printf("Edad del estudiante %d : ",i+1);
        scanf("%d",&edad);
        printf("Promedio del estudiante %d : ",i+1);
        scanf("%lf",&promedio);
    }

    promedioMasAlto(estudiantes,tamanyo);


    return 0;
}
void promedioMasAlto(struct Estudiante estudiantes[], int tamanyo) {
    int indiceMax = 0;
    for (int i = 1; i < tamanyo; i++) {
        if (estudiantes[i].promedio > estudiantes[i+1].promedio) {
            indiceMax = i;
        }
    }

    printf("El estudiante con el promedio mas alto es:\n");
    printf("Nombre: %s\n", estudiantes[indiceMax].nombre);
    printf("Edad: %d\n", estudiantes[indiceMax].edad);
    printf("Promedio: %.2lf\n", estudiantes[indiceMax].promedio);
}

