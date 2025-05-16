// Fill array with random numbers and transpose

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5][5], i, j, total;

      srand(time(0));

      // Fill array with random numbers in the range 0-99
      for(i = 0; i < 5; i ++)
      {
        for(j = 0; j < 5; j ++)
        {
            a[i][j] = rand() % 100;
            printf("%5d", a[i][j]);
        }
        printf("\n");
      }


      printf("\n\nTransposed Array\n\n");


      for(i = 0; i < 5; i ++)
      {
        for(j = 0; j < 5; j ++)
        {
            printf("%5d", a[j][i]);
        }
        printf("\n");
      }

}
