//rozwiazanie.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f.h"
#include "rozwiazanie.h"

double rozwiazanie(double a, double b, double eps)
{
    //middle value of section [a,b]  
    double x = (a+b)/2.0;
    double previousX;
    
    //counting the closest x value for f(x) = 0 <= eps
    do{
        previousX = x;
        //choosing which value to swap x with based on f(x) dsign
        if(f(x) < 0 )
        {
            a = x;
        }

        else{
            b = x;
        }
        
        x = (a+b)/2.0;
    }
    while (fabs(x-previousX) >= eps);

    return x;
}