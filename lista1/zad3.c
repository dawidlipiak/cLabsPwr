// Dawid Lipiak zadanie 3 lista 1
#include <stdio.h>

int main(void)
{
    //liczba calkowita n
    int n;

    //odczyt liczby n
    scanf("%d",&n);

    //petla odliczajaca ilosci wierszy
    for(int i = 0; i < n; i++)
    {
        //petla wyswietlajaca gwiazdki w pojedynczym wersie
        for(int j = 0; j < 2*n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
