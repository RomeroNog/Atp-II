#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void verif_arq_duplicado();
int main()
{
    setlocale(LC_ALL,"Portuguese");
    verif_arq_duplicado();


return 0;
}
void verif_arq_duplicado()
{
    char diretorio[30] = "D:\\Atp2\\teste\\";
    char arquivo[5][30] =
    {
        {"arq1.txt"},{"arq2.txt"},{"arq3.txt"},{"arq4.txt"},{"arq5.txt"}
    };

    char abrir_arq[60];
    char arq_compara[60];
    char c1,c2;
    int teste=0;

    for(int i=0;i<5;i++)
    {
        strcpy(abrir_arq,diretorio);
        strcat(abrir_arq,arquivo[i]);

        FILE *arq = fopen(abrir_arq,"r");
        for(int j=i+1;j<5;j++)
        {
            strcpy(arq_compara,diretorio);
            strcat(arq_compara,arquivo[j]);

            FILE *arq2 = fopen(arq_compara,"r");
            int cont=0;

            while(fscanf(arq,"%c",&c1)!=EOF)
            {
                fscanf(arq2,"%c",&c2);

                if(c1 == c2)
                {
                    cont++;
                }
            }
            //o arquivo tem 10 numeros
            if(cont==10)
            {
                printf("O arquivo %s e %s são iguais!\n",abrir_arq,arq_compara);
                teste++;
            }
            fclose(arq2);
        }
        fclose(arq);
    }
    if(!teste)
    {
        printf("Não há arquivos duplicados no diretório!\n");
    }
}
