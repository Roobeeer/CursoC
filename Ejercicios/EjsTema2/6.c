#include <stdio.h>
double calcular_media(int *array, int tamanyo)
{

    int suma = 0;

    for (int i = 0; i < tamanyo; ++i)
    {
        suma+= *(array+i);
    }
    return (double)suma/tamanyo;
    {

    }
}
int main()
{
    int array[]={234,2,2,35,3,456,35,65,6,35,635,6,35,63,56,5,635};
    int tamanyo = sizeof(array)/sizeof(int


    );
    double media = calcular_media(array,tamanyo);

    printf("Media : %.2lf",media);


    return 0;
}