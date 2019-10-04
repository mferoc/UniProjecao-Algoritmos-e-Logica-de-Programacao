#include <stdio.h>

int main() 
{
    int i , num , fat;
        fat = 1;
  
    printf("Digite um numero N entre 1 e 7 para calcular seu fatorial: ");
    scanf("%d" , &num);

    for(int i = num ; i > 1 ; i--)		
        fat = fat * i;
	    
    printf("%d" , fat);

return 0;
}