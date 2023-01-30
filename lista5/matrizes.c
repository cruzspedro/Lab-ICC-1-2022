#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** matriz;
    int** transp;
    int** mult;
    
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    matriz = malloc(linhas * sizeof(int*));
    matriz[0] = malloc(linhas * colunas * sizeof(int));
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = matriz[0] + colunas*i;
    }
    
    transp = malloc(colunas * sizeof(int*));
    transp[0] = malloc(linhas * colunas * sizeof(int));
    for (int i = 0; i < colunas; i++)
    {
        transp[i] = transp[0] + linhas*i;
    }
    
    int menor = linhas;

    mult = malloc(menor*sizeof(int*));
    mult[0] = malloc(menor*menor*sizeof(int));
    for (int i = 0; i < menor; i++)
    {
        mult[i] = mult[0] + menor*i;
    }
    

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            transp[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            for (int k = 0; k < colunas; k++)
            {
                mult[i][j] += matriz[i][k]*transp[k][j];
            }
              
        }
    }

    printf("%d %d ", menor, menor);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            printf("%d ", mult[i][j]);
        }
    }

    printf("\n");

    return 0;
}