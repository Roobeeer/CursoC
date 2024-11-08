#include <stdio.h>

int main() {
    int age;
    printf("\nEnter your age\n");
    scanf("%d",&age);
    if(age>=18) {
        printf("Estas registrado");
    }else if(age>0 && age <18){
        printf("No estas registrado, eres menor de edad");
    }else {
        printf("Error, no se permiten numeros negativos ni el número 0");
        printf("\nIntroduce de nuevo la edad : ");
        scanf("%d",&age);
    }

    return 0;
}