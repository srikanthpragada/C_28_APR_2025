#include <stdio.h>
#include <conio.h>

// print table for the given number
void print_table(int num)
{
 int i;

    for(i = 1; i <= 20; i ++)
        printf("%5d * %2d = %5d\n", num, i, num * i);
}

void main()
{

   print_table(15);

}
