// Fill array with random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5], i;

      srand(time(0));  // initialize random seed

      for(i = 0; i < 5; i ++)
      {
         a[i] =  rand() % 100;
         printf("%d ", a[i]);
      }
}
