// Fill array with random numbers and print even numbers and then odd numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[20], i;

      srand(time(0));

      // Fill array with random numbers in the range 0-99
      for(i = 0; i < 20; i ++)
      {
         a[i] = rand() % 100;
      }

      // Print even numbers
      for(i = 0; i < 20; i ++)
      {
         if(a[i] % 2 == 0)
            printf("%d ", a[i]);
      }

      // Print odd numbers
      for(i = 0; i < 20; i ++)
      {
         if(a[i] % 2 != 0)
            printf("%d ", a[i]);
      }

}
