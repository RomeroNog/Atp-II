#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex35.txt","r");
    if(arq == NULL)
    {
        printf("Erro!\n");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    char c, string_caracter[26];
    int array_caracter[26];
    int inicio=97;


    for(int i=0;i<26;i++)
    {
        array_caracter[i] = 0;
    }
    for(int i=0;i<26;i++,inicio++)
    {
        string_caracter[i] = inicio;
    }




    while(fscanf(arq,"%c",&c)!=EOF)
    {
        if(c>=65 && c<=90)
        {
            c += 32;
        }
        switch(c)
        {
            case 'a':
            array_caracter[0]++;
            break;

            case 'b':
            array_caracter[1]++;
            break;

            case 'c':
            array_caracter[2]++;
            break;

            case 'd':
            array_caracter[3]++;
            break;

            case 'e':
            array_caracter[4]++;
            break;

            case 'f':
            array_caracter[5]++;
            break;

            case 'g':
            array_caracter[6]++;
            break;

            case 'h':
            array_caracter[7]++;
            break;

            case 'i':
            array_caracter[8]++;
            break;

            case 'j':
            array_caracter[9]++;
            break;

            case 'k':
            array_caracter[10]++;
            break;

            case 'l':
            array_caracter[11]++;
            break;

            case 'm':
            array_caracter[12]++;
            break;

            case 'n':
            array_caracter[13]++;
            break;

            case 'o':
            array_caracter[14]++;
            break;

            case 'p':
            array_caracter[15]++;
            break;

            case 'q':
            array_caracter[16]++;
            break;

            case 'r':
            array_caracter[17]++;
            break;

            case 's':
            array_caracter[18]++;
            break;

            case 't':
            array_caracter[19]++;
            break;

            case 'u':
            array_caracter[20]++;
            break;

            case 'v':
            array_caracter[21]++;
            break;

            case 'w':
            array_caracter[22]++;
            break;

            case 'x':
            array_caracter[23]++;
            break;

            case 'y':
            array_caracter[24]++;
            break;

            case 'z':
            array_caracter[25]++;
            break;
        }
    }
    printf("Frequência de cada caracter: \n");
    for(int i=0;i<26;i++)
    {
        printf("%c %d\n",string_caracter[i],array_caracter[i]);
    }

    fclose(arq);
return 0;
}
