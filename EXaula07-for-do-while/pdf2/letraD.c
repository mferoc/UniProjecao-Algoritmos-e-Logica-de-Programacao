#include<stdio.h>

int main ()
{

    int i;
        i = 1;
    int n;
    
    printf("Digite um numero N, para limitar um intervalo de 1 a N: ");
    scanf("%d" , &n);
  
    while (i <= n)
    {
        if(i % 3 == 0 && i % 7 == 0)
        {
            printf("%d E divisivel por 3 e por 7\n" , i);
        }
        else
        {
            printf("%d NAO E divisivel por 3 e por 7\n" , i);
        }
    
    i++;
    }
  
return 0;
}