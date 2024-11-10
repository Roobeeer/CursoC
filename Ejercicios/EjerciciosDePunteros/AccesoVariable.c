#include <stdio.h>
void intercambiar(int *ptr1, int *ptr2)
{
    int temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;

}
int main()
{
    int valor = 2;
    int valor2 = 443;

    int *ptr = NULL;
    ptr = &valor;
    int *ptr2 = NULL;
    ptr2 = &valor2;
    printf("Valor inicial de los punteros : \nptr1 = %d\nptr2 = %d\n",*ptr,*ptr2);
    intercambiar(ptr,ptr2);
    printf("Valor despues de los punteros : \nptr1 = %d\nptr2 = %d\n",*ptr,*ptr2);
    return 0;
}