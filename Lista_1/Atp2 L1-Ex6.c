#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[102];
    int k=1,soma=0;

    for(int i=0;i<10;i++,k++)
    {
        printf("Numero %d: ",k);
        scanf("%d",&str[i]);
    }
    for(int j=0;str[j]!='\0';j++)
    {
        soma+=str[j];
    }
    printf("Soma: %d",soma);


return 0;
}
