#include <stdio.h>
#include <stdlib.h>

void wypiszKod (int* tab)
{
    for(int i = 0; i < 4; i++)
    {
        printf("[%d] ", tab[i]);
    }
    printf("\n");
} 


int main ()
{
    int redNum, whiteNum, set1, set2, set3, set4;
    int temp;
    int checkCode[4] = {1,1,1,1};
    
    wypiszKod(checkCode);
    printf("red: ");
    scanf("%d", &redNum);
    printf("white: ");
    scanf("%d", &whiteNum);
    
    if( redNum == 4)
        {
            printf("I win!\n");
            return 0;
        }
     
    
    int licznik = 0;

    //sprawdzenie przypadku 4 takich samych liczb az natrafimy na ktoras wystepujaca
    while( (redNum == 0) && (licznik <= 6) )
    {
        for(int i = 0; i < 4; i++)
        {
            checkCode[i]++;
        }    
        wypiszKod(checkCode);
        printf("red: ");
        scanf("%d", &redNum);
        printf("white: ");
        scanf("%d", &whiteNum);

        if( redNum == 4)
        {
            printf("I win!\n");
            return 0;
        }

        licznik++;
    }    

    if((redNum == 0) && (licznik == 6))
    {
        printf("You are cheating!\n");
        return 0;
    }

    //przypadek poprawnej liczby na ktoryms z 4 miejsc
    if(redNum == 1)
    {
        licznik = 0;
        do{
            //zwiekszenie o jeden liczb oprocz liczby na 1. miejscu i sprawdzenie czy jest na dobrej pozycji 
            for(int i = 0; i < 4; i++)
            {
                checkCode[i]++;
            }   
            checkCode[licznik]--;

            wypiszKod(checkCode);
            printf("red: ");
            scanf("%d", &redNum);
            printf("white: ");
            scanf("%d", &whiteNum);
            
            licznik++ ;

            //przesuniecie na nastepna pozycje liczby 
            temp = checkCode[licznik+1]; 
            checkCode[licznik+1] = checkCode[licznik];
            checkCode[licznik] = temp;
        }
        while ( (licznik <= 4) && (whiteNum == 1) );
        
    }


    
    
    return 0;
}