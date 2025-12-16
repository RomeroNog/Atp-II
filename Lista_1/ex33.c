#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(int argc,char **argv)
{
    setlocale(LC_ALL,"Portuguese");
    int soma=0;


    for(int i=1;i<argc;i++)
    {
        soma+=atoi(argv[i]);
    }
    printf("Soma: %d",soma);






return 0;
}
