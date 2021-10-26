// Dawid Lipiak lista2 zadanie2
#include <stdio.h>

int main (void)
{
    int n,x;
    int suma = 0;

    scanf ("%d", &n);
    //sprawdzenie czy zostala podana liczba argumentow 0
    if (n==0)
    {
        printf("nie mozna wyliczyc sredniej arytmetycznej dla 0 liczby danych\n");
    	return 0;
    }
    
    //zczytywanie danych do obliczania sredniej i wyliczenie ich sumy
    for( int i = 0; i < n; i++ )
    {
        scanf("%d", &x);
        suma += x;
    }

    //wyswietlenie wyniku
    printf("\nsrednia arytmetyczna: %d\n", suma/n);

    return 0;

}
