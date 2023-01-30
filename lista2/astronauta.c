#include <stdio.h>

int main(){

    int tamanho, posicao;

    scanf("%d %d", &tamanho, &posicao);

    int lista[tamanho][tamanho];

    int n = tamanho;

    int local[2];

    if (posicao == 0)
    {
        local[0] = local[1] = 0;
    }
    

    if (posicao <= tamanho*tamanho)
    {
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            lista[i][j] = 0;
        }
        
    }

    int count = 0;
    
    int k = 0; 

    while(count != posicao)
    {   
        if (count == posicao)
                {
                    break;
                }
        for (int j = 0; j < n; j++)
        {
            if (count == posicao)
                {
                    break;
                }
            if (lista[k][j] == 0)
            {
                lista[k][j] = 1;
                count += 1;
                local[0] = k;
                local[1] = j;
                
            }
        }
        if (count == posicao)
                {
                    break;
                }
        for (int i = 0; i < n; i++)
        {
            if (count == posicao)
                {
                    break;
                }
            if (lista[i][n-1] == 0)
            {
                lista[i][n-1] = 1;
                count += 1;
                local[0] = i;
                local[1] = n-1;
                
            }
            
        }
        if (count == posicao)
                {
                    break;
                }
        for (int j = n-1; j >= k; j--)
        {
            if (count == posicao)
                {
                    break;
                }
            if (lista[n-1][j] == 0)
            {
                lista[n-1][j] = 1;
                count += 1;
                local[0] = n-1;
                local[1] = j;
                
            }
            
        }
        if (count == posicao)
                {
                    break;
                }
        for (int i = n-1; i >= k; i--)
        {
            if (count == posicao)
                {
                    break;
                }
            if (lista[i][k] == 0)
            {
                lista[i][k] = 1;
                count += 1;
                local[0] = i;
                local[1] = k;
                
            }
        }
        k += 1;
        n = n-1;
    }

        if (posicao == tamanho*tamanho)
        {
            printf("O astronauta esta na posicao: %d %d\nPreste atencao, astronauta, chegou a sua vez!\n", local[0], local[1]);
        }
        else
        {
            printf("O astronauta esta na posicao: %d %d\nAinda faltam %d chamadas para a sua vez!\n", local[0], local[1], tamanho*tamanho - posicao);
        }

    }
    else
    {
        if (posicao > tamanho*tamanho)
        {
            printf("O astronauta ja saiu em missao ha %d chamadas.\n", posicao - tamanho*tamanho);
        }
        
    }
    

return 0;
}


