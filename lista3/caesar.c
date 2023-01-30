#include <stdio.h>

int main()
{
    char c;
    const char alfabeto_min[27] = {'a', 'b', 'c', 'd' , 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    const char alfabeto_max[27] = {'A', 'B', 'C', 'D' , 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int rotor1[26], rotor2[26], rotor3[26], flag = 0, flag1 = 0, flag2 = 0, aux;

    scanf("%*[^\r\n]s");
    scanf("%*[\r\n]s");

    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &rotor1[i]);
    }
    
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &rotor2[i]);
    }

    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &rotor3[i]);
    }

    scanf("%*[^\r\n]s"); // Ignora tudo até o final da linha
    scanf("%*[\r\n]s"); // Ignora o pula linha
    scanf("%*[^\r\n]s"); // Ignora tudo até o final da linha
    scanf("%*[\r\n]s"); // Ignora o pula linha

    do
    {   
        c = getc(stdin);
        if (c == EOF)
        {
            break;
        }
        if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
        {
            printf("%c", c); //se nn for char alfabetico, printa o próprio char coletado
            continue;
        }

        if (c >= 65 && c <= 90) //verifica se o char é um alfabetico maiusculo
        {
            printf("%c", alfabeto_max[rotor3[rotor2[rotor1[(int)c-65]]]]);
            flag1++;
            flag = 1;
        }
        else if (c >= 97 && c <= 122) //verificando se o char é um alfabetico minusculo
        {
            printf("%c", alfabeto_min[rotor3[rotor2[rotor1[(int)c-97]]]]);
            flag1++;
            flag = 1;
        }

        if (flag == 1)
        {
            aux = rotor1[0]; //rodando o rotor 1

            for (int i = 0; i < 25; i++)
            {
                rotor1[i] = rotor1[i+1];
            }
            rotor1[25] = aux;
        }
        
        if (flag1 == 26) //rodando o rotor 2
        {
            flag1 = 0;
            flag2++;
            aux = rotor2[0]; 
            for (int i = 0; i < 25; i++)
            {
                rotor2[i] = rotor2[i+1];
            }
            rotor2[25] = aux;
        }
        if (flag2 == 26) //rodando o rotor 3
        {
            flag2 = 0;
            aux = rotor3[0]; 
                for (int i = 0; i < 25; i++)
                {
                    rotor3[i] = rotor3[i+1];
                }
                rotor3[25] = aux;
        }
        

    } while (c != EOF);
    
    return 0;
}