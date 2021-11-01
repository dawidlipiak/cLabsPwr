//Dawid Lipiak zadanie 4 lista 2

#include <stdio.h>
#include <math.h>

int main (void)
{
    double n =1000.0;
    
    //obliczanie przyblizonej wartosci pierwiasta z silni 1000
    double wynik  = (n/M_E)*pow(sqrt(2*n*M_PI), 1.0/n);
    
    //wyswietlanie wyniku
    printf("%lf\n", wynik);

    
    return 0;

}
