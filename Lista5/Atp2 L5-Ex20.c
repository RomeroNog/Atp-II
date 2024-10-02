#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int encontrar_raiz(int fim, int str[], int ini, int meio,int num)
{

    if(num==str[meio]*str[meio])
    {
        return str[meio];
    }
    if(num==str[ini]*str[ini])
    {
        return str[ini];
    }
    if(num==str[fim]*str[fim])
    {
        return str[fim];
    }
    if(num>str[meio]*str[meio])
    {
        ini=meio;
        meio+=(fim-ini)/2;
        return encontrar_raiz(fim,str,ini,meio,num);
    }
    if(num<str[meio]*str[meio])
    {
        fim = meio;
        meio -= (fim-ini)/2;
        return encontrar_raiz(fim,str,ini,meio,num);
    }



}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero, inicio, meio, fim;



    printf("Digite um número para encontrarmos sua raiz: ");
    scanf("%d",&numero);

    inicio=0;
    fim = numero;
    meio = (fim-inicio)/2;


    int vetor[numero];

    for(int i=1;i<numero+1;i++)
    {
        vetor[i-1] = i;
    }

    printf("Raiz do número é: %d",encontrar_raiz(fim,vetor,inicio,meio,numero));

return 0;
}
