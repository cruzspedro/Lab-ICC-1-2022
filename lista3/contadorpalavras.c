#include <stdio.h>

int main()
{
    int n_linhas = 0, n_palavras = 1, n_chars = -1, f1 = 0, f2 = 0,f3 = 0;;

    char c;

    do
    {
        if (f3 == 2)
        {
            n_palavras ++;
            f3 = 0;
        }

        f1 = f2;

        if (c == EOF)
        {
            break;
        }
        
        c = getc(stdin);

        if (c == '\t' || c == '\r' || c == ' ')
        {
            f2 = 1;
            n_chars ++;
        }

        else if (c == '\n')
        {
            n_chars ++;
            n_linhas ++;
            f2 = 1;
        }

        else 
        {
            n_chars ++;
            f2 = 0;
        }
        
        if (f1 != f2)
        {
            f3 ++;
        }      

    } while (c != EOF);
    

    printf("Linhas\tPalav.\tCarac.\n");
    printf("%d\t%d\t%d", n_linhas, n_palavras, n_chars);

    return 0;
}