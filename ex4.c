#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int powr(int index, int num)
{
    for (int i = 0; i < num; ++i) {
        num*=num;
    }

    return num;
}

int main() {

    char frase[30];
    fgets(frase,30,stdin);
    int pares[30];
    for (int i = 0; i < 30; ++i) {
        pares[i] = 0;
    }

    for (int i = 0; i < 30; ++i) {
        if(frase[i] == '(' || frase[i] == ')')
        {
            pares[i] = 1;
        }
        else if(frase[i] == '[' || frase[i] == ']')
        {
            pares[i] = 2;
        }
        else if(frase[i] == '{' || frase[i] == '}')
        {
            pares[i] = 3;
        }
    }

    int coutParenteses = 0;
    int countCOlchetes = 0;
    int countChaves = 0;

    for (int i = 0; i < 30; ++i) {
        if(pares[i] == 1)
        {
            coutParenteses += 1;
        }
    }

    for (int i = 0; i < 30; ++i) {
        if(pares[i] == 2)
        {
            countCOlchetes += 1;
        }
    }

    for (int i = 0; i < 30; ++i) {
        if(pares[i] == 3)
        {
            countChaves += 1;
        }
    }


    if(countChaves % 2 != 0)
    {
        printf("resultado incorreto.\n");
        exit(1);
    }

    if(countCOlchetes % 2 != 0)
    {
        printf("resultado incorreto.\n");
        exit(1);
    }
    if(coutParenteses % 2 != 0)
    {
        printf("resultado incorreto.\n");
        exit(1);
    }

    printf("Resultado correto.\n");




    return 0;
}
