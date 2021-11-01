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

/*bool zaprzyjazniona (int a, int b)
{
    
    if ( doskonala(a) == doskonala (doskonala(a)) )
    {
        return true;
    }

    return false;
}
*/

int main (void)
{
    printf("Liczby doskonale:\n");
    
    //wyswietlanie liczb doskonalych mniejszych od 1000
    for (int i = 1; i < 1000; i++)
    {
        if(doskonala(i) == i)
        {
            printf("%d ", i); 
        }
    }
    
    printf("\nZaprzyjaznione pary liczb:\n");

    //wyswietlanie liczb zaprzyjanionych mniejszych od 1000
    for(int i = 1; i < 1000; i++)
    {
        if( i == doskonala( doskonala(i)) && i < doskonala(i) )
        {
            printf("(%d,%d) ", i, doskonala(i) );
        }   
    }










    return 0;
}
