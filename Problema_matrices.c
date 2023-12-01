#include <stdio.h>
int main(){
    int y, x, z;
    /*buscamos relizar matrices del tamaño y cantidades que el usuario 
    desee y colocar todos los valores en 0 excepto la ultima que sera 1*/
    printf("Escriba un tamaño de filas\n");
    scanf("%d", &y);
    printf("Escriba un tamaño de columnas\n");
    scanf("%d", &x);
    printf("Escriba la cantidad de matrices\n");
    scanf("%d", &z);
    // inicializo la matris es 3 coordenadas y añado un for externo para cambiar en el eje z
    int matA[z][y][x];
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                //la condicion clave oara que solo la ultima sea 1
                if (k!=z-1)
                {
                    matA[k][i][j]=0;
                }else{
                    matA[k][i][j]=1;
                }
            }
        }
    }
    for (int k = 0; k < z; k++)
    {
        printf("La matriz numero %d:\n", k+1);
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                printf(" %d ", matA[k][i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}