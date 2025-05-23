
#include <stdio.h>


int find(char st[30], char ch)
{
  int i;

    for(i = 0; st[i] != '\0'; i ++)
    {
      if (st[i] == ch)
          return i;
    }

    return -1; // not found
}


void main()
{

 char st[] = "Winner";
 int r;

    r = find(st, 'n');
    printf("%d ", r);

}
