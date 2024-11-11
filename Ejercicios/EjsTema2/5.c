#include <stdio.h>
#include <stdlib.h>


int maximo(int *array, int size)
{
    if(size <= 0)
    {
        printf("Error, el array esta vacio.");
        return -1;
    }


    int max = array[0];
    for (int i = 0; i < size; ++i)
    {
        if(array[i]<max)
        {
            max = array[i];
        }

    }
    return max;

}
int main()
{
    //MEMORIA AUTOMÁTICA

    int arrayauto[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    int sizeauto = sizeof(arrayauto) / sizeof(arrayauto[0]);
    for (int i = 0; i < sizeauto; ++i)
    {
        printf("%d\t",arrayauto[i]);
    }
    int maxautomatica = maximo(arrayauto, sizeauto);
    printf("Mayor memoria automatica : %d",maxautomatica);

    //MEMORIA DINÁMICA
    int n = 10;
    int *heaparray  = (int *)malloc(n*sizeof(int));
   int maximodinamica =  maximo(heaparray,10);

    if(heaparray == NULL)
    {
        printf("Error, fuera de la memoria");
    }


    for (int i = 0; i < n; ++i)
    {
        heaparray[i] = (i+1)*10;
    }
    for (int i = 0; i < n;++i)
    {
        printf("\n%d\t",arrayauto[i]);
    }

    printf("Maximo memoria dinamica es : %d\n",maximodinamica);

    free(heaparray);
    return 0;

}

/*
 *EJERCICIOS INTERESANTES
 *TEMAS DIRECCIONES DE MEMORIA, MONTICULO Y PILA, COMO RESERVAR COMO LIBERAR, ETC
 *
 *EJERCICIO 5,6
 *ver algo de funciones recursivas
 *  Hay 4 ejercicios de teoria y 2 de desarrollo
 *
 *  Ejercicio 12 importante
 *  Ejercicio 13
 *  struct node{
 *  int data;
 *  struct node *next;
 *  }
 *
 *  struct stack {
 *  struct node first;
 *  }
 * en el .h
 *  void push(struct stack n, int data);
 *  int pop(struct stack *n)
 *
 *
 *  PYTHON
 *  practicar con tipos, funciones
 *
