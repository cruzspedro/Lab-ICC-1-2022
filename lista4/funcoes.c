#include <stdio.h>


float media_num(int x[10])
{
    float media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += x[i]/(float)10;
    }
    return media;
}

int maior_num(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else return y;
}

int menor_num(int x, int y)
{
    if (x <= y)
    {
        return x;
    }
    else return y;
}

int moda_num(int x[10])
{
    int aux[10], var, maior, aux2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, flag = 0;

    aux[0] = x[0];

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (x[i] == aux[j])
            {
                aux2[j]++;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
        else
        {
            aux[i] = x[i];
        }
    }
    
    maior = aux2[0];
    var = x[0];

    for (int i = 1; i < 10; i++)
    {
        if (aux2[i] > maior)
        {
            maior = aux2[i];
            var = x[i];
        }
        
    }

    return var;
}

int main()
{
    int lista[10], maior, menor, moda, aux;
    float media;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &lista[i]);
    }

    maior = lista[0];
    
    for (int i = 1; i < 10; i++)
    {
        aux = maior_num(maior, lista[i]);
        maior = aux;
    }

    menor = lista[0];
    
    for (int i = 1; i < 10; i++)
    {
        aux = menor_num(menor, lista[i]);
        menor = aux;
    }

    media = media_num(lista);

    moda = moda_num(lista);

    printf("%d %d %.2f %d", maior, menor, media, moda);

    return 0;
}