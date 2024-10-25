#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char marca[30];
    char modelo[30];
    int ano;
}Carro;
Carro leitura()
{
    Carro car;
    printf("Marca do Carro: ");
    gets(car.marca);
    printf("Modelo do Carro: ");
    gets(car.modelo);
    printf("Ano do Carro: ");
    scanf("%d",&car.ano);

    return car;
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Carro car;
    car = leitura();
    printf("Carro:\n ");
    printf("Marca: %s\n ",car.marca);
    printf("Modelo: %s\n ",car.modelo);
    printf("Ano: %d\n",car.ano);

return 0;
}
