#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int str[20];
    int par=0,impar=0,k=1;

    for(int i=0;i<20;i++,k++)
    {
        printf("Digite o %d n�mero: ",k);
        scanf("%d",&str[i]);
        if(str[i]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("Quantidade de n�meros pares: %d\n",par);
    printf("Quantidade de n�meros �mpares: %d",impar);
return 0;
}
