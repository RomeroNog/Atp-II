#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(int argc,char **argv)
{
    setlocale(LC_ALL,"Portuguese");


    printf("Tamanho da string: %d",strlen(argv[1]));


return 0;
}
