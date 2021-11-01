// Dawid Lipiak lista2 zadanie3 

#include <stdio.h>

int main (void)
{
    double wyrazenie = 1.0;
    int n = 1;

    while ( wyrazenie <= 10)
    {
        n++;
        wyrazenie = wyrazenie + (double)1/n;
    }
 
        printf("%d\n", n);
    return 0;
}
