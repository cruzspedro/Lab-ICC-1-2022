#include <stdio.h>
#include <stdlib.h>

int main()
{  
    typedef struct
    {
        int indice;
        float dano;
    }golpe;
    
    float** matrizTipos;
    int dimensao, aux = 0, tipo2;
    int* atq;
    int* tipo;
    golpe maior;

    scanf("%d", &dimensao);

    atq = malloc(sizeof(int));
    tipo = malloc(sizeof(int));

    matrizTipos = malloc(dimensao * sizeof(float*));
    matrizTipos[0] = malloc(dimensao * dimensao * sizeof(float));
    for (int i = 0; i < dimensao; i++)
    {
        matrizTipos[i] = matrizTipos[0] + dimensao*i;
    }
    
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%f", &matrizTipos[i][j]);
        }
        
    }
    do
    {
        scanf("%d", &atq[aux]);
        if (atq[aux] != -1)
        {
            scanf("%d", &tipo[aux]);
            aux++;
            atq = realloc(atq, (aux+1)*sizeof(int));
            tipo = realloc(tipo, (aux+1)*sizeof(int));

        }
        else break;
    } while (atq[aux] != -1);
    scanf("%d", &tipo2);

    maior.dano = 0;

    for (int i = 0; i <= aux; i++)
    {
        if (matrizTipos[tipo[i]][tipo2]*atq[i] > maior.dano)
        {
            maior.dano = matrizTipos[tipo[i]][tipo2]*atq[i];
            maior.indice = i;
        }
        
    }
    

    printf("O melhor ataque possui indice %d e dano %.2f\n", maior.indice, maior.dano);
    
    return 0;
}