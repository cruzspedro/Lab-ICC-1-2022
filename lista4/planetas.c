#include <stdio.h>

long long unsigned int tempo_i, tempo_segundos, tempo_minutos, tempo_horas, tempo_dias;

void calcTempo(long long unsigned int tempo, char *planeta)
{
    switch (*planeta)
    {
    case 'T':
        tempo_dias = tempo_segundos/86400;

        tempo_horas = (tempo_segundos - tempo_dias*86400)/3600;

        tempo_minutos = (tempo_segundos - tempo_dias*86400 - tempo_horas*3600)/60;

        tempo_segundos = (tempo_segundos - tempo_dias*86400 - tempo_horas*3600 - tempo_minutos*60);
    
        break;
    case 'V':
        tempo_dias = tempo_segundos/20995200;

        tempo_horas = (tempo_segundos - tempo_dias*20995200)/3600;

        tempo_minutos = (tempo_segundos - tempo_dias*20995200 - tempo_horas*3600)/60;

        tempo_segundos = (tempo_segundos - tempo_dias*20995200 - tempo_horas*3600 - tempo_minutos*60);
    
        break;
    case 'M':
        tempo_dias = tempo_segundos/5068800;

        tempo_horas = (tempo_segundos - tempo_dias*5068800)/3600;

        tempo_minutos = (tempo_segundos - tempo_dias*5068800 - tempo_horas*3600)/60;

        tempo_segundos = (tempo_segundos - tempo_dias*5068800 - tempo_horas*3600 - tempo_minutos*60);

        break;
    case 'J':
        tempo_dias = tempo_segundos/35760;

        tempo_horas = (tempo_segundos - tempo_dias*35760)/3600;

        tempo_minutos = (tempo_segundos - tempo_dias*35760 - tempo_horas*3600)/60;

        tempo_segundos = (tempo_segundos - tempo_dias*35760 - tempo_horas*3600 - tempo_minutos*60);
        break;
    default:
    printf("ops");
        break;
    }
    
}

int main()
{
    char planeta[10];

    scanf("%llu %s", &tempo_i, planeta);

    tempo_segundos = tempo_i;

    calcTempo(tempo_segundos, planeta);

    printf("%llu segundos no planeta %s equivalem a:\n%llu dias, %llu horas, %llu minutos e %llu segundos\n", tempo_i, planeta, tempo_dias, tempo_horas, tempo_minutos, tempo_segundos);


    return 0;
}