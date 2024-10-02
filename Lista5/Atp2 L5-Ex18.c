#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void torre_hanoi(int disc, int ori, int dest, int aux){

    if(disc == 1){
        printf("O 1 disco vai para o pino: %d\n", dest);
        return;
    }
    else
    {
        torre_hanoi(disc-1,ori,aux,dest);
        printf("O %d disco para o pino: %d\n", disc, dest);
        return torre_hanoi(disc-1, aux, dest, ori);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int discos, origem=1, destino=3, auxiliar=2;

    printf("Quantos discos terá a torre: ");
    scanf("%d",&discos);

    torre_hanoi(discos,origem,destino,auxiliar);
return 0;
}
