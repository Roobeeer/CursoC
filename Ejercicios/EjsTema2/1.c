#include <stdio.h>


struct Mascota
{
    char mascota[20];
    char raza[20];
    int edad;
};

void printMascota(struct Mascota m)
{
    printf("Mascota: %s\n",m.mascota);
    printf("Raza : %s\n",m.raza);
    printf("Edad : %d\n",m.edad);
}
int main()
{
    struct Mascota m = {"Juan","Pitbull",23};
    printMascota(m);
    return 0;
}