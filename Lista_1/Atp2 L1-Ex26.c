#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str1[50],str2[20];
    int tam1=0,tam2=0;

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2);

    for(int i=0;str1[i]!='\0';i++,tam1++){}
    for(int i=0;str2[i]!='\0';i++,tam2++){}

    printf("Tamanho 1: %d\n",tam1);
    printf("Tamanho 2: %d\n",tam2);

    for(int i=0;i<tam1+tam2;i++)
    {
        str1[tam1+i] = str2[i];
    }
    printf("Strings concatenadas: %s\n",str1);


return 0;
}
