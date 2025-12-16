#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[10];
    int *pntr,k=1,maiuscula=0;

    for(int i=0;i<10;i++,k++)
    {
        printf("%dº caracter: ",k);
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    for(int j=0;str[j]!='\0';j++)
    {
        if(str[j]>64 && str[j]<91)
        {
            maiuscula++;
        }
    }
    printf("Número de letras maiúsculas: %d",maiuscula);













return 0;
}
