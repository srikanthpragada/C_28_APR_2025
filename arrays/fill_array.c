// Fill array with values

#include <stdio.h>

void main()
{
  int a[5], i;

      for(i = 0; i < 5; i ++)
      {
         a[i] = i * i;
      }

      for(i = 0; i < 5; i ++)
      {
         printf("%d ", a[i]);
      }

}
