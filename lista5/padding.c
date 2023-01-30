#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int** matriz;
    int largura, altura, borda;

    scanf("%d %d", &largura, &altura);

    matriz = malloc(altura * sizeof(int*));
    matriz[0] = malloc(altura * largura * sizeof(int));
    for (int i = 0; i < altura; i++)
    {
        matriz[i] = matriz[0] + largura*i;
    }
    
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    scanf("%d", &borda);
    
    for (int i = 0; i < borda; i++)
    {
        for (int j = 0; j < largura+(2*borda); j++)
        {
            printf("0 ");
        }
        printf("\n");
    }
    
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < borda; j++)
        {
            printf("0 ");
        }
        for (int j = 0; j < largura; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        for (int j = 0; j < borda; j++)
        {
            printf("0 ");
        }
        printf("\n");
    }
    
    for (int i = 0; i < borda; i++)
    {
        for (int j = 0; j < largura+(2*borda); j++)
        {
            printf("0 ");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}