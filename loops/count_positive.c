// Count no. of positive numbers and stop when 0 is given

#include <stdio.h>

void main()
{
   int  num, count = 0;


      while(1)  // infinite loop
      {
         printf("Enter a number :");
         scanf("%d",&num);

         if (num == 0)
            break;

         if(num > 0)
            count ++;
      }

      printf("Count = %d", count);
}
