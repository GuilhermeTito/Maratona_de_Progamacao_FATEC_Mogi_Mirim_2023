#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int power(int index, int num)
{
    for (int i = 0; i < num; ++i) {
        num*=num;
    }

    return num;
}

int main() {

    char minuscula[27] = "abcdefghijklmnopqrstuvwxyz";
   // char maiuscula[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int quantidadeDeTestes = 0;
    scanf("%d", &quantidadeDeTestes);
    getchar();

    for (int i = 0; i < quantidadeDeTestes; ++i) {

        char frase[1000];
        fgets(frase, 1000, stdin);
        int tamanho = strlen(frase);

        int quantidadeLetras = 0;

        for (int j = 0; j < 26; ++j) {
            for (int k = 0; k < tamanho; ++k) {
                if(frase[k] == minuscula[j])
                {
                    quantidadeLetras++;
                    break;
                }
            }
        }
        if (quantidadeLetras == 26) {
            printf("Frase completa\n");
        } else if (quantidadeLetras >= 13) {
            printf("Frase quase completa\n");
        } else {
            printf("Frase mal elaborada\n");
        }
    }
    return 0;
}
