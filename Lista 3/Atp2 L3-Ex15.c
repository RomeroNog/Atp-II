#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char rua[50];
    int numero;
    char bairro[50];
}Endereco;

typedef struct{
    char r[50];
    int num;
    char bair[50];
}Dados;

Endereco leitura()
{
    Endereco info;

    printf("Digite sua rua: ");
    gets(info.rua);

    printf("Digite seu n�mero: ");
    scanf("%d",&info.numero);

    fflush(stdin);

    printf("Digite seu bairro: ");
    gets(info.bairro);

    fflush(stdin);

    printf("\n\n");

    return info;
}

void imprimir(Dados end)
{
    printf("Endere�o: \n");
    printf("Rua: %s\n",end.r);
    printf("N�mero: %d\n",end.num);
    printf("Bairro: %s\n",end.bair);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Endereco info;
    info = leitura();

    Dados ender;

    strcpy(ender.r, info.rua);
    ender.num = info.numero;
    strcpy(ender.bair, info.bairro);

    imprimir(ender);

return 0;
}
