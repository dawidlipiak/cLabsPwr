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

    for(int i = 1; i <= n; i++)
    {
        licznik = 0;

        printf("%d; ", i);

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
        
        printf("%lf\n", (double)(licznik/pow(i,2))); 

    }


    















    return 0;
}
