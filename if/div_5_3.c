// Display whether a number is divisible by 5 or 3 or none

#include <stdio.h>

void main()
{
   int num;

      printf("Enter a number :");
      scanf("%d", &num);

      if(num % 5 == 0)
      {
        printf("Divisible by 5");
      }
      else
        if (num % 3 == 0)
        {
           printf("Divisible by 3");
        }
        else
        {
           printf("Divisible by None");
        }

}
