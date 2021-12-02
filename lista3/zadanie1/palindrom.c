//palindrom.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "palindrom.h"


bool palindrom (char slowo[])
{
    int i = 0;
    //base length of string - slowo
    int length = strlen(slowo);

    //verification if the slowo is a palindrome 
    while (length/2 - i > 0)
    {   
        //checking chars from front and rear
        if(slowo[i] != slowo[length-1]){
            return false;
        }
        
        length--;
        i++;
    }
    return true;    
}
