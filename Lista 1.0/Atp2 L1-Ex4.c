//Exerc ́ıcio 4: Declare um array de 8 n ́umeros de ponto flutuante e inicialize- o com os valores dos primeiros 8 n ́umeros da sequˆencia de Fibonacci. Imprima todos os elementos do array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char fibonacci[8];
    //contadores:
    int i,j,k;

    fibonacci[0]=0;
    fibonacci[1]=1;

    for(i=2;i<8;i++)
    {
        fibonacci[i]= fibonacci[i-1] + fibonacci[i-2];
    }

    printf("Sequencia de Fibonacci: \n");
    for(j=0,k=1;j<8;j++,k++)
    {
        printf("%d numero: %d\n",k,fibonacci[j]);
    }
return 0;
}
