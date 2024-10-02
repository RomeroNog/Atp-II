#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(int argc,char **argv)
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[5];

    for(int i=1;i<argc;i++)
    {
        vetor[i-1] = atoi(argv[i]);
        if(vetor[0]<vetor[i-1])
        {
            vetor[0] = vetor[i-1];
        }
    }
    printf("Maior número: %d",vetor[0]);


return 0;
}

