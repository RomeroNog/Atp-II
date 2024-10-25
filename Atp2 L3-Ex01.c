#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char titulo[20];
    char autor[20];
    int ano;
}Livro;
Livro leitura()
{
    Livro livro;
    gets(livro.titulo);
    gets(livro.autor);
    scanf("%d",&livro.ano);
    return livro;

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Livro livro;

    livro = leitura();
    printf("Dados:\n ");
    printf("Título: %s\n ",livro.titulo);
    printf("Autor: %s\n ",livro.autor);
    printf("Ano de publicação: %d\n",livro.ano);
return 0;
}
