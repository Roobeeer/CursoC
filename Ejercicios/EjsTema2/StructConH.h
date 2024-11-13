#ifndef STRUCTCONH_H
#define STRUCTCONH_H
struct Estudiante {
    char nombre[40];
    int edad;
    double promedio;
};

// Declaración de la función promedioMasAlto que también recibe el tamaño del arreglo
void promedioMasAlto(struct Estudiante estudiantes[], int tamanyo);

#endif //STRUCTCONH_H
