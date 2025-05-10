// Take 10 numbers and display how many of them are even

#include <stdio.h>

void main()
{
   int i, num, count = 0;


      for(i = 1; i <= 10; i++)
      {
         printf("Enter a number :");
         scanf("%d",&num);

         if(num % 2 == 0)
            count ++;
      }

      printf("Count = %d", count);

}
