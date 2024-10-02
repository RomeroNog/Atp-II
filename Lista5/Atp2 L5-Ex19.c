#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int binomial(int n, int k)
{
    if(k==0 || n==k)
    {
        return 1;
    }
    else
    {
        return binomial(n-1,k) + binomial(n-1,k-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,k;

    printf("Vamos calcular um binomial:\n");

    printf("Digite o número n do binomial: ");
    scanf("%d",&n);

    printf("Digite o número k do binomial: ");
    scanf("%d",&k);


    printf("Resultado do binomial: %d",binomial(n,k));

return 0;
}
