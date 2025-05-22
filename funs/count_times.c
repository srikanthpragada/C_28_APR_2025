#include <stdio.h>


int count(int a[5], int v)
{
  int i, count = 0;

    for(i = 0; i < 5; i ++)
    {
      if (a[i] == v)
          count ++;
    }

    return count;
}


void main()
{

 int a[5] = {15,2,15,54,50};
 int r;

    r = count(a, 60);
    printf("%d ", r);

}
