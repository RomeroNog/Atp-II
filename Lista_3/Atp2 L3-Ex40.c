#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    int x;
    int y;
    int z;
}Ponto;

Ponto leitura()
{
    Ponto point;
    printf("Digite o ponto x: ");
    scanf("%d",&point.x);

    printf("Digite o ponto y: ");
    scanf("%d",&point.y);

    printf("Digite o ponto z: ");
    scanf("%d",&point.z);

    printf("\n\n");
    return point;
}
void imprimir(Ponto p)
{
    printf("Ponto (x,y,z): (%d,%d,%d)\n\n",p.x,p.y,p.z);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Ponto point = leitura();
    imprimir(point);

return 0;
}
