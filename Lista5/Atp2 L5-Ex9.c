#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void invert_str(char str[],int tam, int ini)
{
    char aux;

    if(tam>ini)
    {
            aux = str[ini];
            str[ini] = str[tam];
            str[tam] = aux;
            return invert_str(str,tam-1,ini+1);
    }
    else
    {
        printf("String invertida: %s",str);
    }

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tamanho,inicio=0;

    printf("Digite o tamanho da sua string: ");
    scanf("%d",&tamanho);

    fflush(stdin);
    char string[tamanho];

    printf("Digite sua string: ");
    gets(string);

        tamanho = tamanho-1;

    invert_str(string,tamanho,inicio);

return 0;
}
