#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[100];
    int cont_carac=0,espaco=0,enter=0;

    printf("Digite um nome: ");
    fgets(str,100,stdin);

    for(cont_carac;str[cont_carac]!='\0';cont_carac++)
    {}
    printf("N�mero de caracteres: %d\n",cont_carac-1);//-1 porque o fgets le o '\n'.

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            espaco++;
        }
        if(str[i]=='\n')
        {
            enter++;
        }
    }
    printf("N�mero de palavras: %d\n",espaco+1);
    printf("N�mero de linhas: %d\n",enter);








return 0;
}
