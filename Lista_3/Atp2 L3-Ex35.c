#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
enum estacao{
    verao=5, outono, inverno, primavera
};
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Verao: %d\n",verao);
    printf("Outono: %d\n",outono);
    printf("Inverno: %d\n",inverno);
    printf("Primavera: %d\n",primavera);

return 0;
}


