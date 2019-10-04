#include <stdio.h>

int main()
{
    int pot = 1, bas, expo, i;
    
    printf("BASE: ");
    scanf("%d" , &bas);
    printf("EXPOENTE: ");
    scanf("%d" , &expo);
    
    for (i = 1; i <= expo; i++)
    {
        if(expo == 0)
        {
            printf("RESULTADO = %d" , 1);
        }
        else
        {
            pot = (pot * bas);
        }
    }
    printf("RESULTADO = %d" , pot);

return 0;
}