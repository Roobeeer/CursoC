#include <stdio.h>
#include <stdlib.h>
void printAge(int *pAge)
{
    printf("You are %d years old", *pAge); //desreferenciar
}

void change_value(char *letter)
{
    *letter = 'B';
}
int main()
{
    //----------------------------------------------------------------------------------------
    //Un puntero es como una variable que almacena la dirección de memoria hacia otra variable
    /*  int age = 21;
    int *pAge = NULL;
    pAge = &age;//es recomendable prrimero declarar el page a NULL y luego darle el valor ;

    printf("adress of age: %p\n",&age);
    printf("value of page: %p\n", pAge);

    printf("size of age,%d\n",sizeof(age));
    printf("size of page,%d\n",sizeof(pAge));
    printf("value of age:  %d\n",age);
    printf("value in pAge: %d\n",*pAge); //para acceder al valor del puntero hay que desreferenciarlo con *
    printAge(pAge);

    //Podemos crear un puntero que apunte a otro puntero
    int *puntero  = &age;
    int **punteroapuntero = &puntero;*/


    //MEMORIA AUTOMÁTICA
   // char letra = 'A';

    //change_value(&letra);   //Hay que pasar la dirección de memoria donde se almacena letter para que el puntero en change_value pueda acceder al dato y poder cambiarlo;
    //Se modifica el espacio donde se encuentra letra;
    //Esto se denomina pasar datos por referencia a una función.Es muy eficiente porque de la otra manera se crea una copia de la variable en memoria y por tanto se utiliza más espacio


    //printf("%c",letra);

    /*MEMORIA DINÁMICA
    //La función MALLOC se utiliza para reservar la memoria de manera manual.
    //Al utilizar la función hay que tener cuidado porque si nos salimos del tamaño de la memoria el programa falla. por tanto HAY QUE HACERLO SIEMPRE ( el if)
    char *l = malloc(sizeof(char));

    if(l == NULL)
    {
        fprintf(stderr, "Error: No está alocado en memoria");
        return 1;
    }

    *l = 'a';

    change_value(l);//Aqui no hace falta el &porque ya hemos definido el puntero, en el otro caso, estabamos pasando una variable
    printf("%c\n",*l);

    free(l);//Se utiliza para liberar la memoria
    */

    //PUNTERO CON STRINGS
    char str[] = "Hola Mundo";
    char *ptr = str;//Por defecto el puntero hace referencia al primer caracter de la cadena, a H

    printf("Caracteres de la cadena %s\n");
    //Tambien podemos declarar un contador
    //int i;
    //i = 0;
    while(*ptr/*[i]*/ != '\0')//El programa siempre añade el \0 al final de una cadena, esto indica que la cadena esta vacia si *ptr = \0;
    {
        printf("%c",*ptr/*|ptr[i]|*/);
        ptr++;/*i++*///Aqui el puntero va al siguiente caracter constantemente hasta lelgar al final, que es \0 y por tanto se sale del while
    }
    printf("\n");
    //En este caso no reservamos memoria con malloc ni free porque no reservamos memoria de un puntero, sino hemos creado un puntero que apunta hacia una cadena de caracteres
    //al crear la cadena de caracteres la memoria se almacena directamente

    return 0;
}