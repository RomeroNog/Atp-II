#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[10];
    int k=1,maior=0,menor=0;

    for(int i=0;i<10;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&str[i]);
        if(i==0)
        {
            maior = str[i];
            menor = str[i];
        }
        if(str[i]>maior)
        {
            maior=str[i];
        }
        if(str[i]<menor)
        {
            menor = str[i];
        }
    }
    printf("Maior número: %d\n",maior);
    printf("Menor número: %d",menor);





return 0;
}
