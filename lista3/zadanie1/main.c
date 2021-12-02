//main.c
// Dawid Lipiak lista 3 zadanie 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindrom.h"



int main (void)
{   
    //memory allocation for string 
    char *str = (char*) malloc(30);
    
    //error check
    if (!str) 
    {
        perror("malloc");
        return EXIT_FAILURE;
    }

    //Reading given by user string 
    scanf("%s", str);

    if(palindrom(str))
    {
        printf("Jest palindromem\n");
    }

    else
    {
        printf("Nie jest palindromem");
    }

    free(str);

    return 0;
}