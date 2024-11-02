#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef union
{
    char frase[200];
    int num;
}Identificador;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Identificador uniao;

    strcpy(uniao.frase,"Palmeiras maior que Corinthians");
    printf("Frase: %s\n",uniao.frase);

    uniao.num = 51;
    printf("Número aramzenado no lugar da frase: %d\n",uniao.num);

return 0;
}
