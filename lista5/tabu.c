#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* frase;
    char* tabu;
    char c;
    int i = 0, rep = 0;

    tabu = malloc(20);
    frase = malloc(1);

    scanf("%s", tabu);
    getchar();

    frase[i] = getc(stdin);

    while (frase[i] != '$' && frase[i] != EOF)
    {
        frase = realloc(frase, i+2);
        i++;
        c = getc(stdin);
        if (c != '$')
        {
            frase[i] = c;
        }
        else getchar();
        
    }

    int tam_frase = i;

    i = 0;
    
    while (i < tam_frase)
    {
        if (strstr(&frase[i], tabu) != NULL && strstr(&frase[i], tabu) == &frase[i])
        {
            rep++;
            tam_frase = tam_frase - strlen(tabu);
            for (int j = i; j < tam_frase; j++)
            {
                frase[j] = frase[j + strlen(tabu)];
            }
        }
        else i++;
    }

    printf("A palavra tabu foi encontrada %d vezes\n", rep);
    printf("Frase: ");
    
    for (int i = 0; i < tam_frase-1; i++)
    {
        printf("%c", frase[i]);
    }
    

    return 0;
}