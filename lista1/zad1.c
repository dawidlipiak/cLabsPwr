#include <stdio.h>

int main(int argc, char *argv[])
{
    //slowo do trojkata
    char word[] = "ABRAKADABRA";
    
    //dlugosc slowa
    int lenght = sizeof(word)-2;
    
    //licznik dlugosci przerw
    int licznik = 0;

    //wyswietlanie trojkata
    for(int i = lenght; i >= 0; i--)
    {
       //wyswietlanie przerw na poczatku wiersza
       for(int p = licznik; p>0; p--)
       {
          printf(" ");
       }

       //wyswietlanie liter we wierszu
       for(int j = 0; j <= i; j++)
       {
          printf("%c ", word[j]);
       }

       printf("\n");
       licznik ++;
    }
    
    return 0;
}
