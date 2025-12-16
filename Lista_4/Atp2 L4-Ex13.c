#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_REGISTROS 3
typedef struct{
    int ra;
    float nota;
    char nome[24];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    arq = fopen("Atp2 L4-Ex13.bin","wb");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    Registro* registr = malloc(NUM_REGISTROS*sizeof(Registro));
    Registro* aux = malloc(sizeof(Registro));

    registr[0].ra = 5678;
    registr[0].nota = 9.5;
    strcpy(registr[0].nome,"Palmeiras");


    registr[1].ra = 8910;
    registr[1].nota = 7.3;
    strcpy(registr[1].nome,"Corinthians");


    registr[2].ra = 1234;
    registr[2].nota = 8.5;
    strcpy(registr[2].nome,"Jefferson");

    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&registr[i], sizeof(Registro), 1, arq);
    }


    for(int i=0;i<NUM_REGISTROS-1;i++)
    {
        fseek(arq,0,SEEK_END);
        for(int i=0;i<NUM_REGISTROS-1;i++)
        {
            if(registr[i].ra > registr[i+1].ra)
            {
                aux->ra = registr[i].ra;
                aux->nota = registr[i].nota;
                strcpy(aux->nome,registr[i].nome);

                registr[i].ra = registr[i+1].ra;
                registr[i].nota = registr[i+1].nota;
                strcpy(registr[i].nome,registr[i+1].nome);

                registr[i+1].ra = aux->ra;
                registr[i+1].nota = aux->nota;
                strcpy(registr[i+1].nome,aux->nome);
                //aux = registr[i];
                //registr[i] = registr[i+1];
                //registr[i+1] = aux
            }
        }
    }
    fclose(arq);
    arq = fopen("Atp2 L4-Ex13.bin","rb+");
    if (arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fwrite(&registr[i], sizeof(Registro), 1, arq);
    }

    fseek(arq,0,SEEK_END);
    printf("\nRegistros ordenados com base no RA!\n");
    for (int i=0; i<NUM_REGISTROS;i++)
    {
        fread(&registr[i], sizeof(Registro), 1, arq);
        printf("\nRegistro %d: \n",i+1);
        printf("RA: %d\n",registr[i].ra);
        printf("Nota: %.2f\n",registr[i].nota);
        printf("Nome: %s\n",registr[i].nome);
    }

    free(aux);
    free(registr);
    fclose(arq);

return 0;
}
