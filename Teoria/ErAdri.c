//
// Created by Rober on 13/11/2024.
//
#include <stdio.h>
#include <stdlib.h>


void invertir(int *numeros, int lenght, int *nuevo)
{
    if (lenght > 0 )
    {
        int index = 0;
        for (int i = lenght-1; i >= 0; --i)
        {
            nuevo[index++] = numeros[i];
        }
    }
}

int main()
{
    int numeros[6] = {1,2,3,4,5,6};
    int lenght = sizeof(numeros) / sizeof(numeros[0]);
    int *nuevo = malloc(lenght * sizeof(int));
    if (numeros == NULL)
    {
        return 1;
    }
    invertir(numeros,lenght, nuevo);
    for (int i = 0; i < lenght; ++i)
    {
        printf("%d ", nuevo[i]);
    }
    return 0;
}