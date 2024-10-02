#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char **string,tempo[15];
    int aux,j;


    string = malloc(3*sizeof(char));
    if(string==NULL)
    {
        printf("Não há mais espaços\n");
        exit(0);
    }
    for(int i=0;i<3;i++)
    {
        string[i] = malloc(15*sizeof(char));
        if(string[i]==NULL)
        {
            printf("Não há mais espaços\n");
            exit(1);
        }
    }



    for(int i=0;i<3;i++)
    {
        printf("Digite %d palavra: ",i+1);
        gets(string[i]);
    }

    for(int l=0;l<2;l++)
    {
        for(int i=0;i<2;i++)
        {
            if (strcmp(string[i], string[i + 1]) > 0)
            {
                strcpy(tempo, string[i]);
                strcpy(string[i], string[i + 1]);
                strcpy(string[i + 1], tempo);
            }

        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\nString %d: %s\n", i + 1, string[i]);
    }


    for(int i=0;i<3;i++)
    {
        free(string[i]);
    }
    free(string);
return 0;
}
