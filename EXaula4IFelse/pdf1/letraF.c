#include <stdio.h>
#include <string.h>

int main ()
{
    char cidade[200];
    int caracteres;

    printf("Digite o nome de uma cidade: \n");

    ////////////////////////////////////////////gets(cidade);
    fgets(cidade, 200, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    caracteres = strlen(cidade);

    if(caracteres > 10)
        printf("O nome da cidade tem %d caracteres, ou seja, mais de %d caracteres.\n", caracteres, 10);
    else
        printf("O nome da cidade tem %d caracteres, ou seja, menos de %d caracteres.\n", caracteres, 10);

    return 0;
}
