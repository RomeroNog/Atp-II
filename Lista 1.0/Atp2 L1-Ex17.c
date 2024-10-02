#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[5],k=1;
    int *pntr;

    for(int i=0;i<5;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&str[i]);
    }
    printf("Vetor ao somar 10 a cada elemento: ");
    for(int j=0;str[j]!='\0';j++)
    {
        pntr = str+j;
        *pntr+=10;
        printf(" %d ",*pntr);
    }

return 0;
}
