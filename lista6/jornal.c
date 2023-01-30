#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar_palavras(char* nome_arq)
{
    int contador = 1, flag = 0;
    char c;
    FILE* fp;

    fp = fopen(nome_arq, "r");
    if(fp == NULL) 
    {
        perror("Deu ruim");
        return(-1);
    }
    do
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            flag = 1;
        }
        else
        {
            if (flag == 1)
            {
                contador++;
                flag = 0;
            }
            
        }
        
    } while (1);

    return contador;
}

int main()
{
   char* nome_arq;
   char* arq2;
   char c;
   int i = 0, max, digitado, porc;

   nome_arq = malloc(1);

   do
   {
    c = getc(stdin);
    if (c == '\n' || c == EOF)
    {
        break;
    }
    if (i > 0)
    {
        nome_arq = realloc(nome_arq,i+1);
    }
    nome_arq[i] = c;
    i++;
    
    }while (1);

    arq2 = malloc(strlen(nome_arq)+4);
    i = 0;

    do
   {
    c = getc(stdin);
    if (c == '\n' || c == EOF)
    {
        break;
    }
    arq2[i] = c;
    i++;
    }while (1);

    max = contar_palavras(nome_arq);
    digitado = contar_palavras(arq2);

    porc = digitado*100/max;

    printf("O candidato digitou %d de %d palavras (%d%%).\n", digitado, max, porc);

    if (porc >= 20)
    {
        printf("Parabéns, candidato! Você foi aprovado!\n");
    }
    else printf("Lamentamos informar, mas você não cumpre os requisitos da vaga, candidato!\n");

    return 0;
}