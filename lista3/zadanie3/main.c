//main.c
//Dawid Lipiak lista 3 zadanie 3
//
//

#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int main(void)
{   
    //n value for phi(n) function
    long int n;

    scanf("%ld", &n);

    printf("%d\n", phi(n));

    return 0;
}