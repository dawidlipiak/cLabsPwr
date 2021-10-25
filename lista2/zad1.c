//Dawid Lipiak lista2 Zad1
#include <stdlib.h>

int main(void)
{
    // tablice dostepnych nominalow
    int banknoty [] = {200, 100, 50, 20, 10};
    int monety[] = {5, 2, 1};
    int grosze[] = {50, 20, 10, 5, 2, 1};

    int kwotaZ, kwotaG;

    //wprowadzenie danych przez uzytkownika
    printf("podaj liczbe zloty: ");
    scanf("%d", &kwotaZ );

    printf("podaj liczbe groszy: ");
    scanf("%d", &kwotaG );

    
    //Wypisywanie po kolei ilosci banknotow
    printf("banknoty:\n");
    int zliczenie = 0;
    for(unsigned int i = 0; i < ( sizeof(banknoty) / sizeof(banknoty[0]) ) ; i++ )
    { 
        zliczenie = 0;
        while ( kwotaZ >= banknoty[i] )
        {
            kwotaZ -= banknoty[i];
            zliczenie++;
            
        }
        if(zliczenie != 0) 
        {
            printf("%d razy %d zl\n", zliczenie, banknoty[i]);
        }
    }

    // wypisywanie monet w zlotowkach
    printf("monety:\n");
    for(unsigned int i = 0; i < ( sizeof(monety) / sizeof(monety[0]) ) ; i++ )
    { 
        zliczenie = 0;
        while ( kwotaZ >= monety[i] )
        {
            kwotaZ -= monety[i];
            zliczenie++;
            
        }
        if(zliczenie != 0) 
        {
            printf("%d razy %d zl\n", zliczenie, monety[i]);
        }
    }

    //wypisywanie monet w groszach
    for(unsigned int i = 0; i < ( sizeof(grosze) / sizeof(grosze[0]) ) ; i++ )
    { 
        zliczenie = 0;
        while ( kwotaG >= grosze[i] )
        {
            kwotaG -= grosze[i];
            zliczenie++;
            
        }
        if(zliczenie != 0) 
        {
            printf("%d razy %d gr\n", zliczenie, grosze[i]);
        }
    }
    
    return 0;
}


