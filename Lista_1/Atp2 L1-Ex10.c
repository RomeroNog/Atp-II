#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int randomicos[10];
    int k=1,soma=0;
    float mediaelem=0;
    for(int i=0;i<10;i++,k++)
    {
        randomicos[i] = 50 + rand()%(150-49);
        soma+=randomicos[i];
    }
    mediaelem=(float)soma/(float)10;
    printf("Média dos elementos randômicos: %.2f",mediaelem);



 return 0;
}
