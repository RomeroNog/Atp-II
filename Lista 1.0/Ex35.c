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
        printf("O n�mero � par");
    }
    else
    {
        printf("O n�mero � �mpar");
    }




return 0;
}

