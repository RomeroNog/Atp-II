#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char marca[20];
    char modelo[30];
    int ano;
}Carro;
Carro leitura()
{
    Carro car;
    printf("Digite a marca do carro: ");
    gets(car.marca);
    fflush(stdin);
    printf("Digite o modelo do carro: ");
    gets(car.modelo);
    printf("Digite o ano de fabricação: ");
    scanf("%d",&car.ano);
    printf("\n\n");
    return car;
}
void imprimir(Carro c)
{
    printf("Dados do carro: \n");
    printf("\tMarca: %s\n",c.marca);
    printf("\tModelo: %s\n",c.modelo);
    printf("\tAno de fabricação: %d\n",c.ano);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Carro car = leitura();
    imprimir(car);

return 0;
}
