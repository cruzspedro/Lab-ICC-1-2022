#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int ID, idade;
    char nome[50], curso[50];
}estudante;

void consultar_aluno(estudante* lista, int tamanho_lista)
{
    int identificador;

    scanf("%d", &identificador);

    for (int i = 0; i < tamanho_lista; i++)
    {
        if (identificador == lista[i].ID)
        {
            printf("Nome: %s\n", lista[i].nome);
            printf("Curso: %s\n", lista[i].curso);
            printf("N USP: %d\n", lista[i].ID);
            printf("IDADE: %d\n\n", lista[i].idade);
        }
        
    }

}

void consultar_curso(estudante* lista, int tamanho_lista)
{
    char nome_curso[50];

    scanf("%[^\n]", nome_curso);
    getchar();

    for (int i = 0; i < tamanho_lista; i++)
    {
        if (strcmp(nome_curso, lista[i].curso) == 0)
        {
            printf("Nome: %s\n", lista[i].nome);
            printf("Curso: %s\n", lista[i].curso);
            printf("N USP: %d\n", lista[i].ID);
            printf("IDADE: %d\n\n", lista[i].idade);
        }
        
    }
    

}

void imprimir_todos(estudante* lista, int tamanho_lista)
{
    for (int i = 0; i < tamanho_lista; i++)
    {
        printf("Nome: %s\n", lista[i].nome);
        printf("Curso: %s\n", lista[i].curso);
        printf("N USP: %d\n", lista[i].ID);
        printf("IDADE: %d\n\n", lista[i].idade);
    }
        
}


int main()
{
   estudante* estudantes;
   int entrada = 0;
   int indice = 0;

    estudantes = malloc(sizeof(estudante));

    do
    {
        scanf("%d", &entrada);

        if (entrada == -1)
        {
            break;
        }
        
        if (entrada != -1)
        {
            if (indice > 0)
            {
                estudantes = realloc(estudantes, (indice+1)*sizeof(estudante));
            }
            
            estudantes[indice].ID = entrada;
            getchar();
            scanf("%[^\n]", estudantes[indice].nome);
            getchar();
            scanf("%[^\n]", estudantes[indice].curso);
            getchar();
            scanf("%d", &estudantes[indice].idade);
            getchar();
        }
        indice++;

    } while (1);

    do
    {
        scanf("%d", &entrada);
        if (entrada == -1)
        {
            break;
        }

        if (entrada == 1)
        {
            consultar_aluno(estudantes, indice);
        }
        else if (entrada == 2)
        {
            consultar_curso(estudantes, indice);
        }
        else if (entrada == 3)
        {
            imprimir_todos(estudantes, indice);
        }
    
    } while (1);
    
    free(estudantes);

    return 0;
}