#include <stdio.h>
#include <conio.h>


// define function
void line(int len)
{
 int i;

    for(i = 1; i <= len; i ++)
        putch('-');
}


void main()
{

   line(30); // call function
   printf("\nSrikanth Technologies\n");
   line(20);

}
