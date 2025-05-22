#include <stdio.h>


int largest(int a[5])
{
  int i, largest = 0;

    for(i = 0; i < 5; i ++)
    {
      if (a[i] > largest)
          largest = a[i];
    }

    return largest;
}


void main()
{

 int a[5] = {15,2,13,54,50};
 int r;

    r = largest(a);
    printf("%d ", r);

}
