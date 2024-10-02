#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int aleatorios[20];
    int k=1;

    for(int i=0;i<20;i++,k++)
    {
        aleatorios[i] = rand()%100;
        printf("Número %d: %d\n",k,aleatorios[i]);
    }



return 0;
}
