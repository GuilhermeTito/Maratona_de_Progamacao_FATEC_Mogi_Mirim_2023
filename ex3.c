#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    float qtdeAtendimento;
    scanf("%f",&qtdeAtendimento);

    float somaAtendimentos = 0;
    float maximo = 0;
    float minimo = INT_MAX;

    for (int i = 0; i < qtdeAtendimento; ++i) {
        float inicio, fim;
        scanf("%f%f",&inicio,&fim);

        if(inicio > 120 || inicio < 0)
        {
            printf("-1");
            exit(1);
        }


        if(fim > 120 || fim < 0)
        {
            printf("-1");
            exit(1);
        }

        if(fim < inicio)
        {
            printf("-1");
            exit(1);
        }

        if(fim - inicio > maximo)
        {
            maximo = fim - inicio;
        }

        if(fim - inicio < minimo)
        {
            minimo = fim - inicio;
        }

        somaAtendimentos += (fim - inicio);

    }

    float media = somaAtendimentos/qtdeAtendimento;

    printf("%f\n",minimo);
    printf("%f\n",maximo);
    printf("%.2f\n",media);




    return 0;
}
