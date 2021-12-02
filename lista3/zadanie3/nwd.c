//nwd.c

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int nwd(int a, int b)
{
    int temp;
    
    //counting nwd of a and b
    while(a%b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return b;
}