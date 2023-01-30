#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
    {
        int HP, Ataque, Defesa, spAtaque, spDefesa, Velocidade;
    }atributos;

    typedef struct 
    {
        char nome[20];
        int poder;
        float acc;
        char classe[2];
    }ataques;
    

    typedef struct 
    {
    char nome[50];
    char tipo_p[20];
    char tipo_s[20];
    atributos atributo;
    ataques ataque[4];
    }pokemon;

void cadastrarPokemon(pokemon* pokemon, int indice)
{
    scanf("%s", pokemon[indice].nome);
    scanf("%s", pokemon[indice].tipo_p);
    scanf("%s", pokemon[indice].tipo_s);
    scanf("%d", &pokemon[indice].atributo.HP);
    scanf("%d", &pokemon[indice].atributo.Ataque);
    scanf("%d", &pokemon[indice].atributo.Defesa);
    scanf("%d", &pokemon[indice].atributo.spAtaque);
    scanf("%d", &pokemon[indice].atributo.spDefesa);
    scanf("%d", &pokemon[indice].atributo.Velocidade);    
}

void add_ataque(pokemon* pokemon)
{
    int indice_pokemon, indice_atq;
    scanf("%d", &indice_pokemon);
    scanf("%d", &indice_atq);
    scanf("%s", pokemon[indice_pokemon].ataque[indice_atq].nome);
    scanf("%d", &pokemon[indice_pokemon].ataque[indice_atq].poder);
    scanf("%f", &pokemon[indice_pokemon].ataque[indice_atq].acc);
    scanf("%s", pokemon[indice_pokemon].ataque[indice_atq].classe);
}

void imprimir_pokemon(pokemon* pokemon)
{
    int indice_pokemon;

    scanf("%d", &indice_pokemon);

    printf("Nome do Pokemon: %s\n", pokemon[indice_pokemon].nome);
    printf("Tipo primario: %s\n", pokemon[indice_pokemon].tipo_p);
    printf("Tipo secundario: %s\n", pokemon[indice_pokemon].tipo_s);
    printf("Status:\n");
    printf("\tHP: %d\n", pokemon[indice_pokemon].atributo.HP);
    printf("\tAtaque: %d\n", pokemon[indice_pokemon].atributo.Ataque);
    printf("\tDefesa: %d\n", pokemon[indice_pokemon].atributo.Defesa);
    printf("\tAtaque Especial: %d\n", pokemon[indice_pokemon].atributo.spAtaque);
    printf("\tDefesa Especial: %d\n", pokemon[indice_pokemon].atributo.spDefesa);
    printf("\tVelocidade: %d\n\n", pokemon[indice_pokemon].atributo.Velocidade);
}

void imprimir_atq(pokemon* pokemon)
{
    int indice_pokemon, indice_atq;

    scanf("%d", &indice_pokemon);
    scanf("%d", &indice_atq);

    printf("Nome do Ataque: %s\n", pokemon[indice_pokemon].ataque[indice_atq].nome);
    printf("Poder base: %d\n", pokemon[indice_pokemon].ataque[indice_atq].poder);
    printf("Acuracia: %f\n", pokemon[indice_pokemon].ataque[indice_atq].acc);
    printf("Classe: %s\n\n", pokemon[indice_pokemon].ataque[indice_atq].classe);
}

int main()
{
   pokemon* listaPokemon;

   int entrada, aux = 0;

   listaPokemon = malloc(sizeof(pokemon));
   
   do
   {
    scanf("%d", &entrada);
    if (entrada == 0)
    {
        break;
    }

    if (entrada == 1)
    {
        cadastrarPokemon(listaPokemon, aux);
        aux++;
    }
    
    if (entrada == 2)
    {
        add_ataque(listaPokemon);
        aux++;
    }
    
    if (entrada == 3)
    {
        imprimir_pokemon(listaPokemon);
        aux++;
    }
    
    if (entrada == 4)
    {
        imprimir_atq(listaPokemon);
        aux++;
    }
    
    listaPokemon = realloc(listaPokemon, (aux+1)*sizeof(pokemon));
    
   } while (entrada != 0);
   

    free(listaPokemon);

    return 0;
}