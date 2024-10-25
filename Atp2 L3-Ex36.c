#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_LIVROS 2

typedef struct{
    char titulo[20];
    char autor[20];
    char tipo[20];
    int ano;
}Livro;

Livro* leitura()
{
    Livro* livro = malloc(NUM_LIVROS*sizeof(Livro));
    if(livro == NULL)
    {
        printf("N�o foi poss�vel alocar!");
        return 0;
    }
    for(int i=0;i<NUM_LIVROS;i++)
    {
        printf("Livro %d: \n",i+1);

        printf("Titulo do livro: ");
        gets(livro[i].titulo);
        fflush(stdin);

        printf("Autor do livro: ");
        gets(livro[i].autor);
        fflush(stdin);

        printf("Tipo do livro: ");
        gets(livro[i].tipo);
        fflush(stdin);

        printf("Ano de publica��o: ");
        scanf("%d",&livro[i].ano);
        fflush(stdin);

        printf("\n\n");
    }
    return livro;

}
void imprimir(Livro* liv)
{
    for(int i=0;i<NUM_LIVROS;i++)
    {
        printf("%d� Livro: \n",i+1);
        printf("T�tulo: %s\n",liv[i].titulo);
        printf("Autor: %s\n",liv[i].autor);
        printf("Tipo: %s\n",liv[i].tipo);
        printf("Ano de publica��o: %d\n",liv[i].ano);
        printf("\n\n");
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Livro* livro = leitura();
    imprimir(livro);

    free(livro);
return 0;
}


