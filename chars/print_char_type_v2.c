// Take a char and print its type

#include <stdio.h>
#include <ctype.h>

void main()
{
   char ch;

      printf("Enter a char: ");
      ch = getchar();

      if(isupper(ch))
         printf("Uppercase");
      else
        if(islower(ch))
            printf("Lowercase");
        else
            if(isdigit(ch))
               printf("Digit");
            else
               printf("Other");

}
