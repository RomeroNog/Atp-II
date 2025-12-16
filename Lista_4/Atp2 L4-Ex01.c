#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;

    arq = fopen("Atp2 L4-Ex01.txt","w");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para escrita\n");
    }

    fprintf(arq,"Mensagem sendo escrita em um arq txt através de um cod c");

    fclose(arq);
return 0;
}
