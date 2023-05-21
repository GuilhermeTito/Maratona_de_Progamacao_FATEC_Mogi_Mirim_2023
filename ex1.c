#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    int ordemMatriz;

    while(ordemMatriz != 0)
    {
        scanf("%d",&ordemMatriz);
        int matriz[ordemMatriz][ordemMatriz];

        for (int i = 0; i < ordemMatriz; ++i) {
            for (int j = 0; j < ordemMatriz; ++j) {
                if(i == 0)
                {
                    if(j== 0)
                    {   matriz[i][j] = 1;
                    }
                    else
                    {
                    matriz[i][j] = matriz[i][j-1]*2;
                    }
                }
                else
                {
                    matriz[i][j] = matriz[i-1][j]*2;
                }

            }
        }

        for (int i = 0; i < ordemMatriz; ++i) {
            for (int j = 0; j < ordemMatriz; ++j) {
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}
