#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int palindromo (char str[], int cont, int ini, int qnt)
{
    if(ini>cont)
    {
        if(qnt==ini)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(str[ini] == str[cont])
        {
            return palindromo(str,cont-1,ini+1,qnt+1);
        }
        return palindromo(str,cont-1,ini+1,qnt);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char string[20];
    int contador,inicio=0,quantidade=0;

    printf("Digite uma palavra: ");
    gets(string);

    contador  = strlen(string);
    contador = contador-1;

    if(palindromo(string,contador,inicio,quantidade)==1)
    {
        printf("\n\tÉ um palíndromo\n");
    }
    else
    {
        printf("\n\tNão é um palíndromo\n");
    }

return 0;
}
