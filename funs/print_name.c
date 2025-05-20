#include <stdio.h>
#include <conio.h>

// User-defined function
void print_info()
{
   printf("Name  : Srikanth Technologies\n");
   printf("Email : contact@srikanthtechnologies.com\n");
}

void line()
{
  int i;

     for(i = 1; i <= 30; i ++)
        putch('-');

     putch('\n');
}

void main()
{

   line();
   print_info();
   line();

}
