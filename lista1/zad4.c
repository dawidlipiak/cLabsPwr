// Dawid Lipiak zadanie 4 lista 1
#include <stdio.h>

int main(void)
{
    //wysokosc trojkata z gwiazdek
    int n;

    scanf("%d",&n);

    //poczatkowa wartosc wielkosci przerwy do gwiazdki
    int space = n-1;

    //ilosc wyswietlanych gwiazdek w wierszu
    int stars = 1;

    //wyswietlanie gwiazdek
    for(int i = 0; i < n; i++)
    {
        //wyswietlenie przerwy przed gwiazdka
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }

        //wyswietlenie gwaizdek w wierszu
        for(int k = 0; k < stars; k++)
        {
            printf("*");
        }

        space--;
        stars += 2;
        printf("\n");
    }

    return 0;
}


