#include <stdio.h>

int main()
{
    int i = 1;
    
    for (i = 1; i <= 50; i++)
    {
        if (i % i == 0 && i % 1 == 0 && i % 2 != 0)
        {
            printf("O numero %i e primo\n" , i);
        }
       
        
    }

return 0;
}

