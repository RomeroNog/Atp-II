#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
enum dias {
    segunda=3,terca,quarta,quinta,sexta,sabado,domingo
};
int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("Segunda: %d\n",segunda);
    printf("terça: %d\n",terca);
    printf("Quarta: %d\n",quarta);
    printf("Quinta: %d\n",quinta);
    printf("Sexta: %d\n",sexta);
    printf("Sábado: %d\n",sabado);
    printf("Domingo: %d\n",domingo);

return 0;
}
