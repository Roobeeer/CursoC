#include <stdio.h>
 #include <stdlib.h>
#include <time.h>

int main() {
 srand(time(0));

 printf("===  JUEGO ADIVINAR NUMERO(1-2000) ===\n");
 printf("Introduzca un numero entero : ");
 int randomNumber = (rand() %2000)+1;
 int n;
 int intentos = 1;
 ;
 scanf("%d",&n);

 do {
  if(n>randomNumber) {
   printf("\nError, el numero es mas pequenyo que %d, intentalo de nuevo: ",n);
   scanf("%d", &n);
   intentos++;
  }else if(n<randomNumber) {
   printf("\nError, el numero es mas grande que %d, intentalo de nuevo: ",n);
   scanf("%d",&n);
   intentos++;
  }else if(n<1 && n>2000) {
   printf("Error, el numero debe ser mayor que 1 y menor que 2000, intentalo");
   scanf("%d",&n);
   intentos++;
  }
 }while(n!=randomNumber);
 printf("\nENHORABUENA, EL NUMERO ADIVINADO ES %d\nNecesitaste %d intentos",randomNumber,intentos);
 return 0;
}