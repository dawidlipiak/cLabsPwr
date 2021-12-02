//west.c


#include <stdio.h>
#include "agents.h"

void west(struct agent *a)
{
    int x = *a.positionX;
    int y = *a.positionY
    *a.position = {x-1,y};
}