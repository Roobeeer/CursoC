#include <stdio.h>
#include <ctype.h>


int main() {

    char unit;
    float temperatura;

    printf("\nEsta la temperatura en Farenheit (F) o Celsius (C) ?\n");
    scanf("%c", &unit);

    unit = toupper(unit);
    if(unit == 'C') {
        printf("Introduce la temperatura en Celsius : \n");
        scanf("%f", &temperatura);
        temperatura = (temperatura*9/5)+32;
        printf("La temperatura en Farenheit es %.1fF",temperatura);

    }else if(unit == 'F') {
        printf("Introduce la temperatura en Farenheit : \n");
        scanf("%f", &temperatura);
        temperatura = ((temperatura-32)*5)/9;
        printf("La temperatura en Celsius es %.1fC",temperatura);
    }else {
        printf("%c Valor no valido, introduzca F o C",unit);

    }

}