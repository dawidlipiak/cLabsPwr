// Dawid Lipiak lista2 zadanie2
#include <stdio.h>

int main (void)
{
    int n,x;
    int suma = 0;

    scanf ("%d", &n);

    for( int i = 0; i < n; i++ )
    {
        scanf("%d", &x);
        suma += x;
    }

    printf("\nsrednia arytmetyczna: %d\n", suma/n);

    return 0;

}