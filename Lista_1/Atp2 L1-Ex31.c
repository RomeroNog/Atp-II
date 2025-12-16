#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int *vetor,k=1,n=0;

    vetor = malloc(5*sizeof(int));

    if(vetor==NULL)
    {
        printf("ERRO");
        return 0;
    }
    for(int i=0;i<5;i++,k++)
    {
        printf("Digite o %d número: ",k);
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<5;i++)
    {
        if(vetor[n]<vetor[i])
        {
            vetor[n] = vetor[i];
        }
    }
    printf("Maior número do vetor de ponteiro: %d",vetor[n]);

    free(vetor);

return 0;
}
