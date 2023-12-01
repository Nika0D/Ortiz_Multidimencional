#include <stdio.h>
int main(){
    int y, x, z;
    printf("Escriba un tamaño de filas\n");
    scanf("%d", &y);
    printf("Escriba un tamaño de columnas\n");
    scanf("%d", &x);
    printf("Escriba la cantidad de matrices\n");
    scanf("%d", &z);
    int matA[z][y][x];
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
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