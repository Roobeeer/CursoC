#include <stdio.h>
#include <stdlib.h>
int *diff(int A[], int tamanayA, int B[], int tamanyB, int *tamanyoSub);
int main()
{
    int A[] = {4, 3, 8, 5, 9};  // Definimos los elementos de A
    int B[] = {8, 1, 2, 3};
    int tamanyoSub;
    int *sub = diff(A,5,B,4, &tamanyoSub);

    printf("El resultado es {");
    for (int i = 0; i < tamanyoSub; ++i)
    {
        printf("%d",sub[i]);
        if(i<tamanyoSub-1)
        {
            printf(",");
        }
        printf("\n");
    }
    return 0;
}

int *diff(int A[], int tamanyoA, int B[], int tamanyoB, int *tamanyoSub){

    int *resultado = (int*)malloc(tamanyoA*sizeof(int));
    int indice=  0;

    for (int i = 0; i < tamanyoA; ++i)
    {
        int repetido = 0;
        for (int j = 0; j < tamanyoB; ++j)
        {
            if(A[i] == B[j])
            {
                repetido++;
                break;
            }
        }

        if(!repetido )
        {
            resultado[indice++] = A[i];
        }
    }

    *tamanyoSub = indice;
    resultado = (int *)realloc(resultado,indice*sizeof(int));
    return resultado;
}