// Display total of 5 numbers

#include <stdio.h>

void main()
{
   int i, num, total = 0;


      for(i = 1; i <= 5; i++)
      {
         printf("Enter a number :");
         scanf("%d",&num);

         total = total + num;
      }

      printf("Total = %d", total);

}
