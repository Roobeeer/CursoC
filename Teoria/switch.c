#include <stdio.h>

int main() {

    char grade;

    printf("Introduce un grado valido\n");
    scanf("%c",&grade);
    switch(grade) {
        case 'A':
            printf("Perfecto\n");
            break;
        case 'B':
            printf("Bien\n");
        break;
        case 'C':
            printf("Casi\n");
        break;
        default :
            printf("Introduce un grado valido, A B C O D\n");
        break;
    }
    return 0;
}