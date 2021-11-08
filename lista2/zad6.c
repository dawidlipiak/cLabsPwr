//Dawid Lipiak Zadanie 6 lista 2

#include <stdio.h>

//funkcja zliczajaca sume dzielnikow liczby
int doskonala(int a)
{
    int suma = 0;

    //petla zliczania sumy dzielnikow liczby a
    for(int i = 1; i < a; i++)
    {
        //sprawdzenie czy liczba jest podzielna przez i
        if ( a%i == 0 )
        {
            suma += i;
        }
    }

    return suma;
}


int main (void)
{   
    int doskonaleLiczby[1000];
    printf("Liczby doskonale:\n");
    
    //wyswietlanie liczb doskonalych mniejszych od 1000
    for (int i = 1; i < 1000; i++)
    {
        doskonaleLiczby[i-1] = doskonala(i);

        if( doskonaleLiczby[i-1] == i)
        {
            printf("%d ", i); 
        }
    }
    
    printf("\nZaprzyjaznione pary liczb:\n");

    //wyswietlanie liczb zaprzyjanionych mniejszych od 1000
    for(int i = 1; i < 1000; i++)
    {
        if( i == doskonala(doskonaleLiczby[i-1]) && i < doskonaleLiczby[i-1] )
        {
            printf("(%d,%d) ", i, doskonaleLiczby[i-1] );
        }   
    }


    return 0;
}
