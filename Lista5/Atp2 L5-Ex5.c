#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int teste_primo(int num, int anterior)
{
    if(anterior>1)
    {
        if(num%anterior==0)
        {
            return 0;
        }
        else
        {
            return teste_primo(num,anterior-1);
        }
    }
    if(num<2)
    {
        return 0;
    }
    else
    {
       return 1;
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero,ant;

    printf("Digite um n�mero para ver se ele � primo: ");
    scanf("%d",&numero);

    ant = numero-1;

    printf("Resultado(0 n�o � primo e 1 � primo): %d",teste_primo(numero,ant));

return 0;
}
