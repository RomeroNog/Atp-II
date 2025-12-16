#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int aleatorio[12];
    int k=1,negativos=0;

    for(int i=0;i<12;i++,k++)
    {
        aleatorio[i] = -20 + rand()%(20+21);
        printf("Número %d: %d\n",k,aleatorio[i]);
        if(aleatorio[i]<0)
        {
            negativos++;
        }
    }
    printf("Números negativos: %d",negativos);


return 0;
}
