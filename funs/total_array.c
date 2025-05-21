#include <stdio.h>


int total(int a[5])
{
  int i, sum = 0;

    for(i = 0; i < 5; i ++)
        sum += a[i];

    return sum;
}


void main()
{

 int a[5] = {1,2,3,4,5};
 int r;

    r = total(a);
    printf("%d ", r);

}
