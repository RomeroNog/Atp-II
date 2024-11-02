#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef union
{
    char frase[200];
    double valor;
}Tipos;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Tipos uniao;

    strcpy(uniao.frase,"Racing 2 x 1 Corinthians");
    printf("Frase: %s\n",uniao.frase);

    uniao.valor = 3.14159265359;
    printf("Valor: %lf\n",uniao.valor);


return 0;
}
