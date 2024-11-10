#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int));
    if(ptr == NULL)
    {
        printf("Error, fuera de la memoria");
        return 1;
    }
    *ptr = 5;
    printf("%d\n",*ptr);
    free(ptr);

    return 0;
}