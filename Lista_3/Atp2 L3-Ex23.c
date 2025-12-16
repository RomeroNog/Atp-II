#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
enum meses{
    janeiro=1,fevereiro,marco,abril,maio,junho,julho,
    agosto,setembro,outubro,novembro,dezembro


};
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Janeiro: %d\n",janeiro);
    printf("Fevereiro: %d\n",fevereiro);
    printf("Março: %d\n",marco);
    printf("Abril: %d\n",abril);
    printf("Maio: %d\n",maio);
    printf("Junho: %d\n",junho);
    printf("Julho: %d\n",julho);
    printf("Agosto: %d\n",agosto);
    printf("Setembro: %d\n",setembro);
    printf("Outubro: %d\n",outubro);
    printf("Novembro: %d\n",novembro);
    printf("Dezembro: %d\n",dezembro);


return 0;
}
