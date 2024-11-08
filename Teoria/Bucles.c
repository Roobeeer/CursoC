#include <stdio.h>
#include <string.h>
int main() {


    /*FOR
    for (int i = 20; i >= 0; i--) {
        printf("% d",i);

    }
    */
    /*char name[25];

    printf("\nEnter your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0) {
        printf("\nNo has introducido el nombre, hazlo por favor: ");
        fgets(name,25,stdin);
        name[strlen(name)-1] = '\0';
    }
    */


    //printf("Hello %s",name);

    //DO-WHILE como en java
    //Bucles anidados igual que en java
    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows");
    scanf("%d",&rows);
    printf("Enter number of columns");
    scanf("%d",&columns);
    scanf("%c");
    printf("Enter a symbol : ");
    scanf("%c",&symbol);
    for(int i = 1;i<=rows;i++) {
        for(int j = 1;j<=columns;j++) {
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}