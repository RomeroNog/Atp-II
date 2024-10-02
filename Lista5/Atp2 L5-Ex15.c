#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void conjunto_partes(char  conj[], int cont, char subconj[], int tamsubconj, int tam)
{
    if (cont==tam)
    {
        printf("{");

        for (int i = 0; i<tamsubconj;i++)
        {
            if (i==tamsubconj-1)
            {
                printf("%c",subconj[i]);
            }
            else
            {
                printf("%c,", subconj[i]);
            }
        }
        printf("}\n");
        return;
    }
    else
    {
    // Elemento atual
    subconj[tamsubconj] = conj[cont];

    // Incluir o elemento atual no subconjunto
    conjunto_partes(conj, cont+1, subconj, tamsubconj+1,tam);

    // Excluir o elemento atual do subconjunto
    return conjunto_partes(conj, cont+1, subconj, tamsubconj,tam);

    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tamanho,contador=0,tamanho_subconj=0;

    printf("Digite o tamanho do conjunto desejado: ");
    scanf("%d",&tamanho);

    char conjunto[tamanho], subconjunto[tamanho];

    for(int i=0;i<tamanho;i++)
    {
        fflush(stdin);
        printf("Digite o %d elemento: ",i+1);
        scanf("%c",&conjunto[i]);
    }
    conjunto_partes(conjunto, contador, subconjunto, tamanho_subconj,tamanho);

return 0;
}
