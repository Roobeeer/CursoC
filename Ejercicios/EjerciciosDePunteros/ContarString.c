#include <stdio.h>

int main()
{
    char name[] = "23";
    int tamanyo = sizeof(name)/sizeof(name[0]);
    char *ptr = name;
    printf("%d\n",sizeof(*ptr));
    if(ptr[0] ==  '\0')
    {
        printf("Error");
    }
    for (int i = 0; i < tamanyo; ++i)
    {
        printf("%c",*ptr);
        ptr++;

    }
    return 0;
}