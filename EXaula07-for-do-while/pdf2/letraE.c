#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,randInit;
    
    srand(time(NULL));
    
        i = 1;
 
    while(i <= 50){
     randInit = rand() %  (100);        
     printf("Numero %d: %d\n",i, randInit);
     i++;}

return 0;}