//distance.c

#include <stdio.h>
#include "agents.h"
#include <math.h>

double distance (struct agent a1, struct agent a2)
{
    return sqrt(pow((a1.positionX)-(a2.positionX),2) + pow( (a1.positionY)-(a2.positionY) ,2));
}
