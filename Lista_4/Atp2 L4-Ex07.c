#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char c[50];
    char string[50];


    arq = fopen("Atp2 L4-Ex07.txt","w");
    if(arq == NULL)
    {
        printf("Arquivo não encontrado!\n");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    printf("Digite uma palavra para substituir no arquivo de texto: ");
    scanf("%s",string);

    fflush(stdin);


    fprintf(arq,"%s",string);

    fclose(arq);
return 0;
}
