#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_LIVROS 3

typedef struct{
    char titulo[50];
    char autor[50];
    int ano;
}Livro;
Livro* leitura()
{
    Livro* book = malloc(NUM_LIVROS*sizeof(Livro));
    if(book == NULL)
    {
        printf("Não foi possível alocar!");
        return 0;
    }
    for(int i=0;i<NUM_LIVROS;i++)
    {
        printf("Livro %d: \n",i+1);
        printf("Digite o título do livro: ");
        gets(book[i].titulo);
        fflush(stdin);

        printf("Digite o autor do livro: ");
        gets(book[i].autor);

        printf("Digite o ano de publicação do livro: ");
        scanf("%d",&book[i].ano);
        printf("\n\n");
        fflush(stdin);
    }
    return book;
}
void imprimir(Livro* b)
{
    for(int i=0;i<NUM_LIVROS;i++)
    {
        printf("Dados do livro %d: \n",i+1);
        printf("Título: %s\n",b[i].titulo);
        printf("Autor: %s\n",b[i].autor);
        printf("Ano de publicação: %d\n",b[i].ano);
        printf("\n\n");
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Livro* book = leitura();
    imprimir(book);

    free(book);
return 0;
}
