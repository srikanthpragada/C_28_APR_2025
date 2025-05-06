// Display whether a number is in the range 1 - 100

#include <stdio.h>

void main()
{
   int num;

      printf("Enter number :");
      scanf("%d", &num);

      if(num >= 1 && num <= 100)
        printf("Valid");
      else
        printf("Invalid");

}
