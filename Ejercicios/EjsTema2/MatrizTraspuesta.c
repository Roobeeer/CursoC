#include <stdio.h>

/*3. Matrices (Arreglos bidimensionales)
Implementa un programa que lea una matriz de 3x3 y luego calcule la matriz transpuesta.
Imprime ambas matrices (original y transpuesta) en formato de tabla.
Opcional: haz que el programa funcione para matrices de tamaño n x m, ingresados por el usuario.*/

int main()
{
#define ROW 3
#define COL 3

    int matriz[ROW][COL] = {{1, 2, 3}, {1,2,3}, {1,2,3}};

    int change, change2;

    for (int i = 0; i < ROW; ++i)
    {
        for (int j = i+1; j < COL; ++j)
        {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;

        }
        
    }
    /*for (int i = 0; i < ROW; ++i)
    {
                change = matriz[i+1][i];
                change2 = matriz[i][i+1];
                matriz[i+1][i] = change2;
                matriz[i][i+1] = change;
    }
    change = matriz[0][COL-1];
    change2 = matriz[ROW-1][0];
    matriz[0][COL-1] = change2;
    matriz[ROW-1][0] = change;
    */

    printf("Matriz transpuesta:\n");
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}