#include <stdio.h>
#include <conio.h>


// define function
void print_reverse(int a[10])
{
 int i;

    for(i = 9; i >= 0; i --)
        printf("%d ", a[i]);
}


void main()
{

  int a[10] = {1,5, 6, 7, 10, 20, 4, 7, 10, 44};

      print_reverse(a);
}
