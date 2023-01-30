#include <stdio.h>
#include <stdlib.h>

void deslocarMatriz(char** matriz, int linhas, int colunas, int baixo, int direita)
{
    char first;

    while (baixo > 0)
    {
        baixo--;
        for (int i = 0; i < linhas; i++)
        {   
            int j;
            first = matriz[i][0];
            for (j = 0; j < colunas-1; j++)
            {
                matriz[i][j] = matriz[i][j+1];
            }
            matriz[i][j] = first; 
        }
        
    }
    
    while (direita > 0)
    {
        direita--;
        for (int j = 0; j < colunas; j++)
        {
            int i;
            first = matriz[0][j];
            for ( i = 0; i < linhas-1; i++)
            {
                matriz[i][j] = matriz[i+1][j];
            }
            matriz[i][j] = first;
        }
        
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    char** matriz;
    int linhas, colunas, baixo, direita;

    scanf("%d %d", &linhas, &colunas);
    scanf("%d %d", &baixo, &direita);


    matriz = malloc(linhas * sizeof(char*));
    matriz[0] = malloc(linhas * colunas * sizeof(char));
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = matriz[0] + colunas*i;
    }

    getchar();

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%c", &matriz[i][j]);
        }
        getchar();
    }

    deslocarMatriz(matriz, linhas, colunas, direita, baixo);

    

    return 0;
}