// Pass by value

#include <stdio.h>


void increment(int n)
{
  n ++;
}


void main()
{
 int a = 100;

   increment(a);

   printf("%d ", a);
}
