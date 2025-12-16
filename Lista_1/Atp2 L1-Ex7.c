#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float str[6];
    float mediaval=0;
    int k=1,soma=0;

    for(int i=0;i<6;i++,k++)
    {
        printf("Número %d: ",k);
        scanf("%f",&str[i]);
    }
    for(int j=0;str[j]!='\0';j++)
    {
        soma +=str[j];
    }
    mediaval= (float)soma/(float)6.0;
    printf("Media dos valores: %.2f",mediaval);

return 0;
}

