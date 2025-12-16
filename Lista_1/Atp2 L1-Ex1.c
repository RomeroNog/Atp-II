//Exerc ́ıcio 1: Declare um array de 10 inteiros e inicialize-o com valores de 0 a 9. Escreva um programa em C que imprima todos os elementos do array.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char valores[10];
    int i,k=1;

    for(i=0;i<10;i++,k++)
    {
        valores[i] = i;
        printf("Valor %d: %d\n",k,valores[i]);
    }
return 0;
}
