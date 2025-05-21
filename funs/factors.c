#include <stdio.h>
#include <conio.h>

// print factors for the given number
void factors(int num)
{
 int i;

    for(i = 2; i <= num/2; i ++)
    {
        if(num % i == 0)
            printf("%d ", i);
    }
}

void main()
{

   factors(255);

}
