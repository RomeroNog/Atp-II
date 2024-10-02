#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char caracteres[8];
    int k=1,vogais=0;

    for(int i=0;i<8;i++,k++)
    {
        printf("%dº caracter: ",k);
        scanf("%c",&caracteres[i]);
        fflush(stdin);
    }
    for(int j=0;caracteres[j]!='\0';j++)
    {
       if(caracteres[j]== 'a' || caracteres[j]=='A')
        {
            vogais++;
        }
        if(caracteres[j]== 'e' || caracteres[j]=='E')
        {
            vogais++;
        }
        if(caracteres[j]== 'i' || caracteres[j]=='I')
        {
            vogais++;
        }
        if(caracteres[j]== 'o' || caracteres[j]=='O')
        {
            vogais++;
        }
        if(caracteres[j]== 'u' || caracteres[j]=='U')
        {
            vogais++;
        }
    }
    printf("Número de vogais: %d",vogais);



 return 0;
}
