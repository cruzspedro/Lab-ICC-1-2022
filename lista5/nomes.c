#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMITE 300

//limite aqui se refere ao numero de chars de um nome... mais de 300 pra um nome é brincadeira, po kkk

int main()
{
    char** matrizNomes;
    int i = 0;

    matrizNomes = calloc(1, sizeof(char*));
    matrizNomes[0] = malloc(LIMITE * sizeof(char));

    fgets(matrizNomes[0], LIMITE, stdin);

    matrizNomes[0] = realloc(matrizNomes[0], (strlen(matrizNomes[0]))*sizeof(char));

    if (matrizNomes[0][strlen(matrizNomes[0])-1] != '$')
    {
        do
        {
            i++;
            matrizNomes = realloc(matrizNomes, (i+1)*sizeof(char*));
            matrizNomes[i] = malloc(LIMITE * sizeof(char));
            fgets(matrizNomes[i], LIMITE, stdin);
            matrizNomes[i] = realloc(matrizNomes[i], (strlen(matrizNomes[i]))*sizeof(char));
        
        }while (matrizNomes[i][strlen(matrizNomes[i])-2] != '$');
    }
    
    for (int j = 0; j < i+1; j++)
    {
        if (j%2 == 0)
        {
            for (int k = 0; k < strlen(matrizNomes[j]); k++)
            {
                if (matrizNomes[j][k] != '$')
                    {
                        putchar(matrizNomes[j][k]);
                    }
            }
            
        }
        else
        {
            for (int l = 0; l < strlen(matrizNomes[j])-1; l++)
            {
                if (matrizNomes[j][l] != '$')
                    {
                        putchar(matrizNomes[j][l]);
                    }
            }
            for (int x = -1; x < 0; x--)
            {
                if (matrizNomes[j-1][strlen(matrizNomes[j-1])+x] == ' ')
                {
                    for (int h = x; h <= -1; h++)
                    {
                        printf("%c", matrizNomes[j-1][strlen(matrizNomes[j-1])+h]);
                    }
                    break;
                }
            }
            
        }
        
    }
    
    
    
    

    return 0;
}