//Exerc ́ıcio 3: Declare um array de 7 inteiros e inicialize-o com os valores dos primeiros 7 n ́umeros primos. Escreva um programa em C que imprima todos os elementos do array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char num_primos[7];
    int primo,ehprimo;
    int i,j,k=2,l;

    num_primos[0] = 1;
    num_primos[1] = 2;

    for(primo=3;primo<15;primo++)
    {
        ehprimo=0;
        for(i=2;i<primo;i++)
        {
            if(primo%i==0)
            {
                ehprimo++;
            }
        }
        if(ehprimo==0)
        {
            num_primos[k]=primo;
            k++;
        }
    }
    for(j=0,l=1;j<7;j++,l++)
    {
        printf("Primo %d: %d\n",l,num_primos[j]);
    }
 return 0;
}
