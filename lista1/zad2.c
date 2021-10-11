#include <stdio.h>
#include <math.h>

int main(void)
{
	//zmienne do odczytu
	int a,b,c ;
	
    //odczyt danych
    scanf("%d%d%d",&a, &b, &c);
    
    float delta, x, x1, x2;

    //obliczenie delty 
    delta = b*b-(4*a*c);

    if(delta < 0)
    {
        //wyswietlenie komunikatu o braku rozwiazan
        printf("Nie ma rozwiazan rownania w zbiorze liczb rzeczywistych\n");
    }

    else if(delta == 0)
    {
        //obliczenie 1 pierwiastka rownania
        x = -1*b/2*a;
        printf("Jest jedno rozwiazanie x = %.2f\n", x );
    }

    else 
    {
        //obliczenie 2 pierwiastkow rowniania
        x1 = (-1*b-(sqrt(delta)))/2*a;
        x2 = (-1*b+(sqrt(delta)))/2*a;

        printf("Sa dwa rozwiazania rownania x1 = %.2f i x2 = %.2f\n", x1, x2);

    }
    return 0;

}

