#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_PRODUTOS 4

typedef struct{
    char nome[50];
    int codigo;
    float preco;
}Produto;
Produto* leitura()
{
    Produto* produt = malloc(NUM_PRODUTOS*sizeof(Produto));
    if(produt == NULL)
    {
        printf("N�o foi poss�vel alocar!");
        return 0;
    }
    for(int i=0;i<NUM_PRODUTOS;i++)
    {
        printf("Digite o nome do produto %d: ",i+1);
        gets(produt[i].nome);
        printf("Digite o c�digo do produto %d: ",i+1);
        scanf("%d",&produt[i].codigo);
        printf("Digite o pre�o do produto %d: ",i+1);
        scanf("%f",&produt[i].preco);
        fflush(stdin);
        printf("\n\n\n");
    }
    return produt;
}
void imprimir(Produto* pt)
{
    for(int i=0;i<NUM_PRODUTOS;i++)
    {
        printf("Produto %d: \n ",i+1);
        printf("Nome %d: %s\n ",i+1,pt[i].nome);
        printf("C�digo %d: %d\n ",i+1,pt[i].codigo);
        printf("pre�o %d: %.2f\n ",i+1,pt[i].preco);
        printf("\n\n\n");
    }

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Produto* produt = leitura();
    imprimir(produt);

    free(produt);
return 0;
}

