#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int match (char* wzorzec, char* lancuch)
{ 
    if ((wzorzec[0] == '\0') || (lancuch[0] == '\0')) 
    {
       if((wzorzec[0] == '\0') && (lancuch[0] == '\0'))
       {
           return 1;
       } 
       else
       {
           return 0;
       }
    }
    else if( (wzorzec[0] == lancuch[0]) || wzorzec[0] == '?' )
    {
        return match(&wzorzec[1], &lancuch[1]);
    }
    
    else if( wzorzec[0] == '*')
    {
        if(wzorzec[1] == '\0')
        {
            return 1;
        }

        int i = strlen(lancuch)-1;

        while( (wzorzec[1] != lancuch[i]) && (&lancuch[i] != &lancuch[0]) )
        {
            i--;
        }
        if( wzorzec[1] == lancuch[i] )
        {
            return match ( &wzorzec[2], &lancuch[i+1] );
        }
        else
        {
            return 0;
        }   
    }
    else
    {
        return 0;
    }
    
}

int main (void)
{
    if(match("a*b*a", "abadsadsafabasdasdasba")){      
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    if(match("a*b*a", "ababababababababababab")){
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    
  
    return 0;
}