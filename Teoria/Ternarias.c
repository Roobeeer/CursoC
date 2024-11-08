#include <stdio.h>

int findMax(int x, int y); //Declaración de función, hacerlo así es para asegurar que luego se establecen los argumentos correctos
int main() {
    //El operador ternario es un atajo para cuando podemos utilizar un if/else
    //(condicion) ? valor si es cierto : valor si es falso

    int max = findMax(5,4);
    printf("%d",max);
    return 0;
}
int findMax(int x, int y) {
    return (x>y?x:y);
}