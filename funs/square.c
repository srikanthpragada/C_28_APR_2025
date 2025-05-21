#include <stdio.h>


int square(int num)
{
    return num * num;
}


void main()
{

 int r;

    r = square(15);
    printf("%d ", r);

    r = square(25);
    printf("%d ", r);

}
