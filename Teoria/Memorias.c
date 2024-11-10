#include <stdio.h>

int main()
{
    // memoria : array de bytes sin RAM
    //bloque de memoria = un byte sin memoria, usado para almacenar un valor
    //dirección de memoria = la memoria donde esta posicionada el bloque de memoria

    //Char 1 byte;
    //int = 4 bytes;
    //float = 4bytes;
    //double = 8 bytes
    char x = 'X';
    char d = 'Y';
    //En arrays la memoria es individual, es decir, si tenemos un array de integers, ocupará 4*la cantidad de elmentos que tenga
    double e [2]; //4bytes*2
    printf("%d bytes\n%d bytes\n%d bytes",sizeof(x),sizeof(d),sizeof(e));

    //Para mostrar las direcciones de memoria utilizamos %p y &a;

    printf("\nDirecciones de memoria\n%p\n%p\n%p",&x,&d,&e);
    return 0;
}