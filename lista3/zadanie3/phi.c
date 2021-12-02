//phi.c

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int phi(long int n)
{
    
    int counter = 0;

    for(int i = 1; i < n; i++)
    {
        
        if(nwd(i,n) == 1)
        {
            counter++;
        }
    }

    return counter;
}