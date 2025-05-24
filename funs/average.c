#include <stdio.h>

// prototype declaration
float average(int, int);

void main()
{
 float r;

      r = average(10, 15);
      printf("%f", r);
}


// Function definition
float average(int a, int b)
{
    return (a + b) / 2.0;
}
