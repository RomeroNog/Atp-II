#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char carac,c;
    int cont=0;


    arq = fopen("Atp2 L4-Ex06.txt","r");
    if(arq == NULL)
    {
        printf("Arquivo não encontrado!\n");
    }
    else
    {
        printf("Arquivo pronto para manipulação!\n");
    }
    printf("Qual caracter deseja encontrar no txt: ");
    scanf("%c",&carac);

    while(fscanf(arq,"%c",&c)!=EOF)
    {

        if(c == carac)
        {
            cont++;
        }
    }
    if(cont!=0)
    {
        printf("Caracter %c foi encontrado %d vezes!",carac,cont);
    }

    fclose(arq);
return 0;
}
