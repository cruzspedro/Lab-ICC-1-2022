#include <stdio.h>

int main(){

    int x = 0, y = 0;
    int *prtx = &x, *prty = &y;

    char lista[7];

    scanf("%s", lista);

    for (int i = 0; i < 7; i++)
    {
        if (lista[i] == 87)
        {
            *prty+=1;
        }
        if (lista[i] == 83)
        {
            *prty+=-1;
        }
        if (lista[i] == 65)
        {
            *prtx+=-1;
        }
        if (lista[i] == 68)
        {
            *prtx+=1;
        }
        
    }
    printf("%d %d\n", x, y);

return 0;
}
