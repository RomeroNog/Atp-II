#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[30];
    float salario;
    char departamento[20];
}Funcionario;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tam = sizeof(Funcionario);
    printf("Tamanho da struct: %d\n",tam);

return 0;
}

