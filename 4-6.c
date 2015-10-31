#include <stdio.h>

int main()
{
   int i=1;
   double s=0; 

    
    while(1) 
     {
         s+=1/i;
         if(s>3)
            break;
    }
    printf("%lf",s);
    return 0;
} 
