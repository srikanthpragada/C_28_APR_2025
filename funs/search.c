#include <stdio.h>

// return the position where value is found in the array
// return -1 if value is not found

int search(int a[5], int v)
{
  int i;

    for(i = 0; i < 5; i ++)
    {
      if (a[i] == v)
           return i;
    }

    return -1;
}


void main()
{

 int a[5] = {15,2,15,54,50};
 int pos;

    pos = search(a, 55);
    printf("%d ", pos);

}
