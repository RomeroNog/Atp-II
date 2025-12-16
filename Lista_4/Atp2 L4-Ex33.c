#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int ra;
    float nota;
    char nome[24];
}Registro;

void merge_sort(Registro vetor[],int ini,int fim);
void ordenar_partes(Registro vetor[],int ini, int meio, int fim);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    Registro registr[7] =
    {
        {4,2.2,"Jakson"},
        {2,5.5,"Jeferson"},
        {1,4.4,"Palmeiras"},
        {0,3.3,"Corinthians"},
        {6,6.6,"Botafogo"},
        {5,7.7,"Criciuma"},
        {3,8.8,"Roberto"}
    };
    FILE *arq = fopen("Atp2 L4-Ex33.bin","wb");
    if(arq == NULL)
    {
        printf("Erro!\n");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for(int i=0;i<7;i++)
    {
        fwrite(&registr[i],sizeof(Registro),1,arq);
    }
    fclose(arq);


    FILE *arq1 = fopen("Atp2 L4-Ex33.bin","rb");
    if(arq1 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }

    Registro reg[7];
    for(int i=0;i<7;i++)
    {
        fread(&reg[i],sizeof(Registro),1,arq1);
    }
    fclose(arq1);

    merge_sort(reg,0,6);

    FILE *arq2 = fopen("Atp2 L4-Ex33.bin","wb");
    if(arq2 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    for(int i=0;i<7;i++)
    {
        fwrite(&reg[i],sizeof(Registro),1,arq2);
    }
    fclose(arq2);


    FILE *arq3 = fopen("Atp2 L4-Ex33.bin","rb");
    if(arq3 == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    int start=0,finish=6,mid,desejado,cont=0;

    printf("Digite o ra do registro que deseja(0-6): ");
    scanf("%d",&desejado);

    while(start<=finish)
    {
        mid = (start+finish)/2;
        Registro regis;

        fseek(arq3,mid*sizeof(Registro),SEEK_SET);
        fread(&regis,sizeof(Registro),1,arq3);

        if(regis.ra>desejado)
        {
            finish = mid-1;
        }
        if(regis.ra<desejado)
        {
            start = mid+1;
        }
        if(regis.ra==desejado)
        {
            printf("\nRegistro desejado: \n");
            printf("RA: %d\n",regis.ra);
            printf("Nota: %.2f\n",regis.nota);
            printf("Nome: %s\n",regis.nome);
            cont++;
            return 0;
        }
    }
        if(!cont)
    {
        printf("\nRegistro não se encontra no arquivo binário!\n");
    }
    fclose(arq3);
return 0;
}
void merge_sort(Registro vetor[],int ini,int fim)
{
    if(ini<fim)
    {
        int meio = (ini+fim)/2;
        merge_sort(vetor,ini,meio);
        merge_sort(vetor,meio+1,fim);
        ordenar_partes(vetor,ini,meio,fim);
    }
}
void ordenar_partes(Registro vetor[],int ini,int meio,int fim)
{
    Registro aux[7];
    int metade1=ini;
    int metade2=meio+1;
    int k=0;

    while(metade1<=meio && metade2<=fim)
    {
        if(vetor[metade1].ra<=vetor[metade2].ra)
        {
            aux[k] = vetor[metade1];
            k++,metade1++;
        }
        else
        {
            aux[k] = vetor[metade2];
            k++,metade2++;
        }
    }
    while(metade1<=meio)
    {
        aux[k] = vetor[metade1];
        k++,metade1++;
    }
    while(metade2<=fim)
    {
        aux[k] = vetor[metade2];
        k++,metade2++;
    }
    for(int i=ini,k=0;i<=fim;i++,k++)
    {
        vetor[i] = aux[k];
    }
}
