// Pass by reference / address

#include <stdio.h>


void increment(int * n)
{
   *n = *n  + 1;
}


void main()
{
 int a = 100;

   increment(&a); // pass address of a

   printf("%d ", a);
}
