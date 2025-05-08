// Print numbers that are divisible by 5 or 7

#include <stdio.h>

void main()
{
   int i;


       for(i = 5; i <= 50; i ++ )
       {
           if(i % 5 == 0 || i % 7 == 0)
                printf("%d ", i);
       }
}
