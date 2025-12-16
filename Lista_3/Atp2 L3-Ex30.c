#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int x;
    int y;
    int z;
}Ponto;

typedef struct{
    char tipo[40];
    Ponto point;
}Funcao;

Funcao leitura()
{
    Funcao funcao;
    printf("Digite o tipo da Função: ");
    gets(funcao.tipo);
    printf("Ponto do x: ");
    scanf("%d",&funcao.point.x);

    printf("Ponto do y: ");
    scanf("%d",&funcao.point.y);

    printf("Ponto do z: ");
    scanf("%d",&funcao.point.z);

    printf("\n\n");
    return funcao;
}
void imprimir(Funcao f)
{
    printf("Dados da função: \n");
    printf("Tipo: %s\n",f.tipo);
    printf("Ponto x: %d\n",f.point.x);
    printf("Ponto y: %d\n",f.point.y);
    printf("Ponto z: %d\n",f.point.z);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Funcao funcao = leitura();
    imprimir(funcao);

return 0;
}
