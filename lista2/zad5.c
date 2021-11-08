//Dawid Lipiak zadanie 5 lista 2

#include <stdio.h>
#include <math.h>

int nwd(int a, int b)
{   
    while(a!=b)
    {
        if(a<b)
        {
            b = b - a;
        }
        else 
        {
             a = a-b;
        }
    }
    return a;
}


int main (void)
{
    int n = 1000;

    int licznik;

    //Utworzenie pliku wykres.csv
    FILE * fp;
    fp = fopen("wykres.csv","w");
    
    for(int i = 1; i <= n; i++)
    {
        licznik = 0;
        
        //wypisanie wiersza
        fprintf(fp,"%d;", i);
	    
        
        //petla sprawdzajaca wszystkie pary liczb od (1,1) do (n,n)
        for(int j = 1; j <= i; j++)
        {
            for(int k = 1; k <= i; k++)
            {
                if ( nwd(j,k) == 1)
                {
                    licznik++;
                }
            }
        }
        
       //zapisanie wartosci obliczenia 
       fprintf(fp,"%lf\n", (double)(licznik/pow(i,2)));

    }
    //zamkniecie pliku
    fclose(fp);

    return 0;
}
