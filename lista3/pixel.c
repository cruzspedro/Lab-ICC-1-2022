#include <stdio.h>

int main()
{
    int lista[5] = {0, 0, 0, 0, 0}, entrada[25], maior, maior_lista;

    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &entrada[i]);
        if (entrada[i] == 0)
        {
            lista[0]++;
        }
        if (entrada[i] == 1)
        {
            lista[1]++;
        }
        if (entrada[i] == 2)
        {
            lista[2]++;
        }
        if (entrada[i] == 3)
        {
            lista[3]++;
        }
        if (entrada[i] == 4)
        {
            lista[4]++;
        }
    }

    printf("0: |");
    for (int i = 0; i < lista[0]; i++)
    {
        printf("#");
    }
    printf("\n");
    
    printf("1: |");
    for (int i = 0; i < lista[1]; i++)
    {
        printf("#");
    }
    printf("\n");
    printf("2: |");

    for (int i = 0; i < lista[2]; i++)
    {
        printf("#");
    }
    printf("\n");
    printf("3: |");

    for (int i = 0; i < lista[3]; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("4: |");

    for (int i = 0; i < lista[4]; i++)
    {
        printf("#");
    }
    printf("\n");
    
    maior = lista[0];
    maior_lista = 0;

    for (int i = 0; i < 5; i++)
    {
        if (lista[i] > maior)
        {
            maior = lista[i];
            maior_lista = i;
        }
        
    }

    for (int i = 0; i < 25; i++)
    {
        if (maior_lista == entrada[i])
        {
            printf("%d\n", i);
        }
        
    }
    
    

    return 0;
}