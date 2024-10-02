#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[5];
    int k=1, positivos=0;

    for(int i=0;i<5;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&str[i]);
        if(str[i]>=0)
        {
            positivos++;
        }
    }
    if(positivos==5)
    {
        printf("Todos os elementos são positivos");
    }
    else
    {
        printf("Nem todos elementos são positivos");
    }
return 0;
}
