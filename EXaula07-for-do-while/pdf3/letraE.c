#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,randInit;
    
    srand(time(NULL));
    
        i = 1;
 
    do{
     randInit = rand() %  (100);        
     printf("Numero %d: %d\n",i, randInit);
     i++;} while(i <= 50);

return 0;}