//main.c
//
//Dawid Lipiak lista 3 zadanie 2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f.h"
#include "rozwiazanie.h"

int main (void)
{
    //section [a,b] for function f and eps - approximation of the result
    double a,b;
    double eps = pow(10,-8);

    printf("Podaj przedzial [a,b]:\n");
    scanf("%lf%lf", &a, &b);
    
    //setting a and b in order 
    double temp;
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    //counting our closest x for f(x)=0
    double x0 = rozwiazanie(a,b,eps);

    printf("\n%lf\n", x0);


}