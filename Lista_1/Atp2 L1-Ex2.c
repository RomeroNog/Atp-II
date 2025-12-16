//Exerc ́ıcio 2: Declare um array de 5 caracteres e inicialize-o com as letras ’a’, ’b’, ’c’, ’d’ e ’e’. Imprima os elementos do array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char caracteres[5];
    int i,j,k=1;

    for(i=0,j=97;j<102;j++,i++,k++)
    {
        caracteres[i] = j;
        printf("Caracter %d: %c\n",k,caracteres[i]);
    }
return 0;
}
