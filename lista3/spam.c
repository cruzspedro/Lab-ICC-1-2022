#include <stdio.h>
#include <string.h>

int main()
{
    char linha[100];
    const char spam[][10] = {"dinheiro", "atencao", "urgente", "imediato", "zoombie", "oferta", "gratuito", "renda", "fundo", "limitado", "ajuda", "SOS"};
    int flag = 0;

    while (fgets(linha, 100, stdin))
    {
        if (strlen(linha) > 76)
        {
            flag++;
        }
        for (int i = 0; i < 12; i++)
        {   
            if (strstr(linha, spam[i]))
            {
                flag++;
            }
        }

    }

    if (flag > 1)
    {
        printf("Spam");
    }
    if (flag <= 1)
    {
        printf("Inbox");
    }

    return 0;
}