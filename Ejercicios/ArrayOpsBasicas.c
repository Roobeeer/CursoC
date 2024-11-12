#include <stdio.h>


int main()
{
    int numeros[10];
    int suma = 0;
    double promedio =0;
    int mayor, menor;
    int tamanyo = sizeof(numeros)/sizeof(int);
    for (int i = 1; i < tamanyo+1; ++i)
    {
        printf("Introduce el numero %d : ",i);
        scanf("%d",&numeros[i]);
        suma += numeros[i];

    }

    promedio = suma/tamanyo;

    mayor = menor = numeros[0];

    for (int i = 0; i < tamanyo; ++i)
    {
        if(numeros[i] > mayor)
        {
            mayor = numeros[i];
        }else if(numeros[i]>menor)
        {
            menor = numeros[i];
        }

    }

    printf("Suma : %d\n",suma);
    printf("Promedio : %.2lf\n",promedio);
    printf("Menor : %d\n",menor);
    printf("Mayor : %d\n",mayor);

    return 0;
}