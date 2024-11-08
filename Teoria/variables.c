#include <stdio.h>


int main(){
    int x; //Declaración
    x = 123; //Inicialización

    int y = 124; //Declaración e inicialización

    int age = 21;
    float gpa= 2.05;
    char grade = 'a'; //dede -128 hasta 127
    char name[] = "bro";

    char n = 120;
    printf("%c\n",n);

    unsigned char g = 257; //Al ser unsigned, si se pasa de 255, vuelve a comenzar desde 0

    printf("%d\n",g);
    /* printf("You are %f years old\n",gpa);
     printf("Your name is %s\n",name);
     printf("Tu grado es %c\n",grade);
     printf("Tu gpa es %f\n",gpa);

    /*
    FORMATOS
    %c = character
    %s  = string
    %f = float
    %lf = double
    %d  = integer


    %.1 = precision decimal. Aproximar a cuantos decimales queremos que se muestren
    %1 = minimo tamaño, deja espacios blancos a la izq
    %- = alinear a la izquierda, deja espacios blancos a la derecha

   float item1 = 5.75;
   float item2 = 10.00;
   float item3 = 100.99;

   printf("Item1 : $%.2f\n", item1);
   printf("Item1 : $%.2f\n", item2);
   printf("Item1 : $%.2f\n", item3);

    */



    //CONSTANTES


    //Constante :valor que no puede ser alterado por el programa durante la ejecución


    const float PI = 3.14159;

    printf("%f",PI);

    return 0;
}