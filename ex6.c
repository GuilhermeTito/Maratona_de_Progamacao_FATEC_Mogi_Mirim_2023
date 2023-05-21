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

    char letras[27] = "abcdefghijklmnopqrstuvwxyz";

    int quantidadeDeTestes = 0;
    scanf("%d",&quantidadeDeTestes);

    int quantidadeLetras = 0;

    for (int i = 0; i < quantidadeDeTestes; ++i) {
        char frase[1000];
        fgets(frase,1000,stdin);

        //min 3

        for (int j = 0; j < 1000; ++j) {
            if(frase[j] == '\0')
            {
                break;
            }
            else
            {
                for (int k = 0; k < 26; ++k) {
                    for (int z = 0; z < 1000; ++z) {
                        if(letras[k] == frase[z])
                        {
                            quantidadeLetras++;
                            break;
                        }
                    }
                }

            }
        }
    }

    printf("letras: %d\n", quantidadeLetras);
    if(quantidadeLetras == 26)
    {
        printf("Frase completa\n");
    }
    else if(quantidadeLetras >= 13)
    {
        printf("Frase quase completa\n");
    }
    else
    {
        printf("Frase mal elaborada\n");
    }
    return 0;
}
