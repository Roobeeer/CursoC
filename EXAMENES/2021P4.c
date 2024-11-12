#include <stdio.h>
#include <stdlib.h>
int *mostrarArray(int tamanyo1,int tamanyo2,int tamanyo3);
int main()
{
    int *A;
    mostrarArray(10,20,30);
    printf("Algunos valores del array: ");
    for (int i = 0; i < 5 && i < 10 * 20 * 30; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    free(A); // Liberación de la memoria reservada
    return 0;

}

int *mostrarArray(int tamanyo1,int tamanyo2,int tamanyo3)
{
    int tamanyo = tamanyo1*tamanyo2*tamanyo3;
    int *array = (int *)malloc(sizeof(int)*10*20*30);
    if(array == NULL)
    {
        printf("Error al alocar en la memoria");
    }
    for(int i = 0;i<tamanyo;i++)
    {
        array[i] = i;
    }
    return array;
    printf("\n");
}