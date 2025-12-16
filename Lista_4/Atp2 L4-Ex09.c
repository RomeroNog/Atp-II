#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int ra;
    int telefone;
    char nome[24];
}Registro;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Registro reg;
    FILE *arq;
    int cont=0;

    arq = fopen("Atp2 L4-Ex09.bin","rb");
    if(arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    while(!feof(arq))
    {
        fread(&reg,sizeof(Registro),1,arq);

        cont++;
    }
    printf("Número de registros: %d\n",cont);





    fclose(arq);
return 0;
}

