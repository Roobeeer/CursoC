#include <stdio.h>

int main()
{
    int array1[] = {1, 2};
    int array2[] = {3, 4};
    int tamanyo1 = sizeof(array1) / sizeof(array1[0]);
    int *ptr = array1;
    int *ptr2 = array2;
    int resultado = 0;

    if (ptr == NULL)
    {
        printf("Error, la lista está vacía\n");
        return 1; // Salimos del programa si la lista está vacía
    }

    for (int i = 0; i < tamanyo1; ++i)
    {
        resultado += ptr[i] + ptr2[i]; // Sumamos los elementos correspondientes de array1 y array2
    }

    printf("El resultado es: %d\n", resultado);
    return 0;
}
