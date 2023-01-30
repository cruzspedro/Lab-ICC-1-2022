#include <stdio.h>

int main()
{
    char velha[3][10];

    int flag = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%c%*c", &velha[i][j]);
        }
    }
         
    for (int i = 0; i < 3; i++)
    {
        if ((velha[i][0] == velha[i][1]) & (velha[i][0] == velha[i][2]) & (velha[i][0] != '-'))
        {
            printf("%c ganhou\n", velha[i][0]);
            flag = 0;
            break;
        }
        
    }

    if (flag == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            if ((velha[0][i] == velha[1][i]) & (velha[0][i] == velha[2][i]) & (velha[0][i] != '-'))
            {
                printf("%c ganhou\n", velha[i][0]);
                flag = 0;
                break;
            }
        
        }
    }
    
    
    if (flag == 1)
    {
        if ((velha[0][0] == velha[1][1]) & (velha[0][0] == velha[2][2]) & (velha[0][0] != '-'))
        {
            printf("%c ganhou\n", velha[0][0]);
            flag = 0; 
        }
    } 
        if (flag == 1)
            {
                if ((velha[0][2] == velha[1][1]) & (velha[1][1] == velha[2][0]) & (velha[0][2] != '-'))
                {
                    printf("%c ganhou\n", velha[0][2]);
                    flag = 0;
                }
            }
        
    if (flag == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            if (flag == 1)
            {
                for (int j = 0; j < 3; j++)
            {
                if (velha[i][j] == '-')
                {
                    printf("em jogo\n");
                    flag = 0;
                    break;
                }
                
            }
            }
        }
        
    }
    

    if (flag == 1)
    {
        printf("empate\n");
    }
    

    return 0;
}