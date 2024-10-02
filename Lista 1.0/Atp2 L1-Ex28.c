#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[20],caracter,substituto;

    printf("Digite uma palavra: ");
    gets(str);

    printf("Digite um caracter que queira substituir: ");
    scanf("%c",&caracter);

    fflush(stdin);

    printf("Por qual caracter no lugar: ");
    scanf("%c",&substituto);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==caracter)
        {
            str[i]=substituto;
        }
    }
    printf("Palavra mudada: %s\n",str);
return 0;
}
