//newagent.c

#include <stdio.h>
#include "agents.h"

struct agent newagent(int x, int y)
{ 
    struct agent a;

    a.positionX = x;
    a.positionY = y;

    return a;
}