#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[30];
    int codigo;
    float preco;
}Produto;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tam;

    tam = sizeof(Produto);
    printf("Tamanho da struct: %d\n",tam);

return 0;
}
