#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[7];
    int ajuda=0;
    int *pntr,k=1;
    pntr = &ajuda;

    for(int i=0;i<7;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&str[i]);
    }
    for(int j=0;str[j]!='\0';j++)
    {
        *pntr+=str[j];

    }
    printf("Soma dos números do vetor: %d",*pntr);
return 0;
}
