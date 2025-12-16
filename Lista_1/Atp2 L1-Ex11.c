#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int valores[15];
    int k=1,maior=0;

    for(int i=0;i<15;i++,k++)
    {
        valores[i] = rand()%50;
        if(valores[i]>maior)
        {
            maior = valores[i];
        }
        printf("Número %d: %d\n",k,valores [i]);
    }
    printf("Maior número: %d",maior);


return 0;
}
