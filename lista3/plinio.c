#include <stdio.h>

int main()
{
    char lista[32][64], c, aux, retro;
    int a, b;

    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 64; j++)
        {
            c = getc(stdin);
            if (c == EOF)
            {
                break;
            }
            if (c != EOF)
            {
                lista[i][j] = c;
                if (c == '[')
                {
                    a = i;
                    b = j+2;
                }
                
            }
            
            
        }
        
    }

    

        while (aux != '*')
    {
        aux = lista[a][b];
        lista[a][b] = '.';
        switch (aux)
        {
        case '.':
            printf("Loop infinito.\n");
            aux = '*';
            break;

        case '>':
            b += 2;
            retro = '>';
            break;

        case '<':
            b += -2;
            retro = '<';
            break;

        case '^':
            a += -1;
            b += -1;
            retro = '^';
            break;

        case 'v':
            a += 1;
            b ++;
            retro = 'v';
            break;
        
        case ']':
            printf("Ok.\n");
            lista[a][b] = ']';
            aux = '*';
            break;
        
        case ' ':
            aux = '*';
            printf("Falha na esteira.\n");
            lista[a][b] = ' ';
            break;
    
        case '#':
            lista[a][b] = '#';
            switch (retro)
            {
            case '>':
                b += 2;
                break;

            case '<':
                b += -2;
                break;

            case '^':
                a += -1;
                b += -1;
                break;

            case 'v':
                a ++;
                b++;
                break;
            
                default:
                    break;
            }
            break;
        
        default:
            aux = '*';
            printf("Falha na esteira.\n");
            break;
        }

    }
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 64; j++)
        {
            printf("%c", lista[i][j]);
        }
        
    }
    
    return 0;
}