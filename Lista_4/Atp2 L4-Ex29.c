#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define DESLOCAMENTO 3
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex29.txt","r+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    char criptografia[100];

    printf("Digite uma palavra para ser critografada(em minúsculo): ");
    gets(criptografia);

    int tam = strlen(criptografia);

    for(int i=0;i<tam;i++)
    {
        if(criptografia[i]>96 && criptografia[i]<123)
        {
            criptografia[i] += DESLOCAMENTO;
        }
        if(criptografia[i]>122)
        {
            criptografia[i] -= 26;
        }
    }
    printf("Criptografado: %s\n",criptografia);

    fprintf(arq,"Criptografado: %s\n",criptografia);

    for(int i=0;i<tam;i++)
    {
        if(criptografia[i]>96 && criptografia[i]<123)
        {
            criptografia[i] -= DESLOCAMENTO;
        }
        if(criptografia[i]<97 && criptografia[i]>93)
        {
            criptografia[i] += 26;
        }
    }
    printf("Descriptografado: %s\n",criptografia);

    fprintf(arq,"Descriptografado: %s\n",criptografia);

    fclose(arq);
return 0;
}
