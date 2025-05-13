// Take a char and print its type

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch, i, count = 0;

      for(i = 1; i <= 10; i ++)
      {
         printf("\nEnter a char: ");
         ch = getche();

         if(isupper(ch))
            count ++;
      }

      printf("\nCount = %d", count);

}
