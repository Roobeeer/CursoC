#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "bro";
    char string2[] = "bode";

    //strlwr(string1); //convierte en minusculas
   //strupr(string1);//convierte en mayusuclas

   //strcat(string1,string2);//concatena string2 al final de 1
   //strncat(string1,string2,1);//concatena n caracteres de string2 al final de s1
   //strcpy(string1,string2);//copia string2 en string1
   //strncpy(string1,string2,4);//copia n elementos de string 2 en string1

    //strset(string1,'?'); //pone todos los caracteres de string1 a ?
    //strnset(string1,'x',1); //pone los primeros n caracteres de string1 al caracter establecido
   //strrev(string1);//pone al revés

    //int result = strlen(string1);//tamañao de string1
    //int result = strcmp(string1,string2); //compara todos los caracteres
    int result = strncmp(string1,string2,1);//compara los primeros n caracteres de string2 con string1

   // printf("%s",string1);

 if(result==0) {
  printf("mismo");
 }else {
  printf("no same");
 }

    //printf("%d",result);


    return 0;
}