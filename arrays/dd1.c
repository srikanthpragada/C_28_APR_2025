// Fill array with random numbers and print even numbers and then odd numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5][5], i, j;

      srand(time(0));

      // Fill array with random numbers in the range 0-99
      for(i = 0; i < 5; i ++)
      {
        for(j = 0; j < 5; j ++)
        {
            a[i][j] = rand() % 100;
        }
      }



      for(i = 0; i < 5; i ++)
      {
        // print columns in a row
        for(j = 0; j < 5; j ++)
        {
            printf("%5d", a[i][j]);
        }
        // come to next line
        printf("\n");
      }


}
