//north.c


#include <stdio.h>
#include "agents.h"

void north(struct agent *a)
{
    int x = *a.positionX;
    int y = *a.positionY
    *a.position = {x,y+1};
}