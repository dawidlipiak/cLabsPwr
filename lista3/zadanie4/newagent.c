//newagent.c

#include <stdio.h>
#include "agents.h"

struct agent newagent(int x, int y)
{
    return {x,y};
}