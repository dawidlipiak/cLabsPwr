//south.c


#include <stdio.h>
#include "agents.h"

void south(struct agent *a)
{
    a->positionY -= 1;
}