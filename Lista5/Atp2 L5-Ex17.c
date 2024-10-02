#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int caminhos(int pas,int mov )
{
    if(mov==0 || pas==mov)
    {
        return 1;
    }
    else
    {
        return caminhos(pas-1,mov) + caminhos(pas-1,mov-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,passos, movimentos ;

    printf("Qual a dimensão da grade NxN: ");
    scanf("%d",&n);

    passos = 2*(n-1);

    movimentos = passos/2;

    printf("O número de caminhos possíveis: %d",caminhos(passos,movimentos));

return 0;
}
