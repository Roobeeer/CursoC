#include <stdio.h>
#include <string.h>
    /*double prices [] = {5.0,10.0,15.0,25.0,20.0};
    printf("%.2lf",prices[0]);*/

    //array con bucles
    /* double prices [] = {5.0,10.0,15.0,25.0,20.0};

     for(int i = 0;i< sizeof(prices)/8;i++) {
         printf("$%.2lf",prices[i]);
     }*/

    //ARRAY 2D
    /*int array[][] = {
                    {1,2,3,4},
                    {5,6,7,8}
                    };
                    */
    /* int numbers[3][3];

     int rows = sizeof(numbers)/sizeof(numbers[0]);
     int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

     printf("Rows : %d\n", rows);
     printf("Columns : %d\n", columns);

     numbers[0][0] = 1;
     numbers[0][1] = 2;
     numbers[0][2] = 3;
     numbers[1][0] = 4;
     numbers[1][1] = 5;
     numbers[1][2] = 6;
     numbers[2][0] = 7;
     numbers[2][1] = 8;
     numbers[2][2] = 9;

     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < columns; j++) {
             printf("%d ", numbers[i][j]);
         }
         printf("\n");
     }

     */


    //Array de Strings

   /* char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    strcpy(cars[0],"Tesla");


    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); ++i) {
        printf("%s\n",cars[i]);

    }*/

    //Intercambiar valores de array
   /* char agua[15] = "agua";
    char limonada[15] = "soda";
    char temporal[15];
    strcpy(temporal,agua);
    strcpy(agua,limonada);
    strcpy(limonada,temporal);

    printf("Agua:%s\nLimonada:%s",agua,limonada);*/


    int main() {
    //Ordenar arrays
    void ordenar(char array[], int size);
    void printArray(char array[], int size);
   // int array[] = {8,4,7,8,12,7,3,2};ç
    char array[] = {'a','b','c','h','d','e'};
    int size = sizeof(array)/sizeof(array[0]);

    ordenar(array,size);
    printArray(array,size);
    return 0;
}

void ordenar(char array[], int size) {
        for (int i = 0; i < size-1; ++i) {
            for (int j = 0; j < size-i-1; ++j) {
                if(array[j]>array[j+1]) {
                    int temporal = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temporal;
                }
            }

        }
    }

void printArray(char array[], int size){
    for (int i = 0; i < size; ++i) {
        printf("%c",array[i]);
    }
}
