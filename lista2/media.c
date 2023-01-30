#include <stdio.h>

int main()
{

    double a,b,c,d;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    float lista[4] = {a,b,c,d};

    float menor = lista[0];

    for (int i = 1; i < 4; i++)
    {
        if (lista[i] < menor)
        {
            menor = lista[i];
        }
        
    }

    printf("%.4f", (a+b+c+d-menor)/3);
    
return 0;
}


