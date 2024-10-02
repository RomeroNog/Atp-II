#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[10],metadeigual[5];
    int k=1,simetria=0;

    for(int i=0;i<10;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&str[i]);
    }
    for(int j=0,w=9;j<5;j++,w--)
    {
        metadeigual[j] = str[w];
    }
    metadeigual[5]='\0';
    str[10]='\0';
    for(int m=0;metadeigual[m]!='\0';m++)
    {
        if(str[m]==metadeigual[m])
        {
           simetria++;
        }
    }
    if(simetria==5)
    {
        printf("É simétrico");
    }
    else
    {
        printf("Não é simpetrico");
    }
return 0;
}
