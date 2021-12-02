//main.c
//Dawid Lipiak lista 3 zadanie 4

#include <stdio.h>
#include <stdlib.h>
#include "agents.h"

int main (void)
{
    struct agent Bob = newagent(0,0);
    north(&Bob);

    printf("%d  %d", Bob.positionX, Bob.positionY);
}