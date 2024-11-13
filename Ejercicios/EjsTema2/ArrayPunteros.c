#include <stdio.h>
/*
*Crea un programa que pida al usuario que ingrese 5 números y almacénalos en un arreglo.
Utiliza punteros para recorrer el arreglo y mostrar los valores al revés (del último al primero).
Modifica el contenido del arreglo utilizando punteros, multiplicando cada valor por 2.
*/

int main()
{
    int matriz[5];
    int tamanyo = sizeof(matriz)/sizeof(int);
    printf("Introduce los valores de la matriz\n");
    for (int i = 0; i < tamanyo; ++i)
    {
        printf("Valor %d : ",i);
        scanf("%d",&matriz[i]);

    }

    int *ptr = &matriz[tamanyo-1];
    for (int i = tamanyo; i > 0; i--)
    {
        printf("%d\t",*ptr);
        ptr--;
    }


    ptr = matriz;
    for (int i = 0; i < tamanyo; ++i)
    {

        *ptr = *ptr*2;
        ptr++;
    }

printf("\nValores despues de multiplicar por 2 : \n");
    for (int i = 0; i < tamanyo; ++i)
    {
        printf("%d\t",matriz[i]);
    }



    return 0;
}