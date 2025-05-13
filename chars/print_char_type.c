// Take a char and print its type

#include <stdio.h>

void main()
{
   char ch;

      printf("Enter a char: ");
      ch = getchar();

      if(ch >= 65 && ch <= 90)
         printf("Uppercase");
      else
        if(ch >= 97 && ch <= 122)
            printf("Lowercase");
        else
            if(ch >= 48 && ch <= 57)
               printf("Digit");
            else
               printf("Other");

}
