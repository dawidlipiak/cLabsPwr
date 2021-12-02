//south.c


#include <stdio.h>
#include "agents.h"

void south(struct agent *a)
{
    int x = *a.positionX;
    int y = *a.positionY
    *a.position = {x,y-1};
}