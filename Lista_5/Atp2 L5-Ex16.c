#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int Ackermann(int m, int n)
{

    if(m==0)
    {
        return n+1;
    }
    if(m>0 && n==0)
    {
        return Ackermann(m-1,1);
    }
    if(m>0 && n>0)
    {
        return Ackermann(m-1,Ackermann(m,n-1));
    }



}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int m,n;

    printf("Digite o primeiro argumeto m inteiro e não negativo: ");
    scanf("%d",&m);

    printf("Digite o segundo argumento n inteiro e não negativo: ");
    scanf("%d",&n);


    printf("Sequência de Ackermann: %d", Ackermann(m,n));
return 0;
}
