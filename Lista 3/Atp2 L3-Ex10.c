#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef union
{
    int num_int;
    float num_float;
}variavel;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    variavel uniao;

    uniao.num_int = 15;
    printf("N�mero inteiro com uni�o: %d\n",uniao.num_int);

    uniao.num_float = 3.75;
    printf("N�mero de ponto flutuante com uni�o: %.2f\n",uniao.num_float);

return 0;
}
