#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char tipo[30];
   float torque;
}motor;

typedef struct{
    char marca[30];
    char modelo[30];
    motor detalhe;
}veiculo;
veiculo leitura()
{
    veiculo autom;
    printf("Digite a marca: ");
    gets(autom.marca);
    printf("Digite o modelo: ");
    gets(autom.modelo);
    return autom;
}
motor ler()
{
    motor detalhe;
    printf("Digite o tipo de motor: ");
    gets(detalhe.tipo);
    printf("Qual o torque: ");
    scanf("%f",&detalhe.torque);
    return detalhe;
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    veiculo autom;
    motor detalhe;
    autom = leitura();
    detalhe = ler();

    autom.detalhe = detalhe;

    printf("Especificações:\n ");
    printf("Marca: %s\n ",autom.marca);
    printf("Modelo: %s\n ",autom.modelo);
    printf("Tipo do motor: %s\n ",autom.detalhe.tipo);
    printf("Torque do motor: %.2f",autom.detalhe.torque);

return 0;
}
