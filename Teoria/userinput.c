#include <stdio.h>
#include <string.h>
int main(){
    char name[25]; //bytes
    int age;

    printf("Whats your name?");
    fgets(name,25, stdin); //incluye un salto de linea al final del name
    name[strlen(name)-1] = '\0'; //Con esto no se realiza el salto de línea

    printf("Whats your age? ");
    scanf("%d", &age);

    printf("Hi %s, how are you?\n Your age is %d years old", name, age);
    return 0;
}