#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char frase[1024];

    arq = fopen("Atp2 L4-Ex08.bin","rb");
    if(arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    fread(frase,sizeof(char),1024,arq);

    printf("%s",frase);

    fclose(arq);
return 0;
}

