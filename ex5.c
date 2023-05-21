#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    int a,b;

    scanf("%d%d",&a,&b);

    //checar divisore a;

    int divB[b];
    int divA[a];
    int j = 0;

    for (int i = 0; i < a; ++i) {
        divA[i] = 0;
    }
    for (int i = 0; i < b; ++i) {
        divB[i] = 0;
    }

    for (int i = 1; i < a; ++i) {
        if(a % i == 0)
        {
            divA[j] = i;
            j++;
        }
    }

    j = 0;
    for (int i = 1; i < b; ++i) {
        if(b % i == 0)
        {
            divB[j] = i;
            j++;
        }
    }

    //soma div a
    int sumA = 0;
    for (int i = 0; i < a; ++i) {
        sumA += divA[i];
    }

    //soma div b
    int sumB = 0;
    for (int i = 0; i < b; ++i) {
        sumB += divB[i];
    }

    //checar divisore b;


    if(sumA == b && sumB == a)
    {

        printf("amigavel");
    }
    else
    {
        printf("nao amigavel");
    }



    return 0;
}
