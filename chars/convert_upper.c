// Take a char and print its type

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch, i;

      printf("\nEnter 10 chars: ");
      for(i = 1; i <= 10; i ++)
      {
         ch = getch();
         ch = toupper(ch);
         putch(ch);
      }

}
