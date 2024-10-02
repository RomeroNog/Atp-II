#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(int argc,char **argv)
{
    setlocale(LC_ALL,"Portuguese");
    int num=0;


    num = atoi(argv[1]);

    if(num%2==0)
    {
        printf("O número é par");
    }
    else
    {
        printf("O número é ímpar");
    }




return 0;
}

