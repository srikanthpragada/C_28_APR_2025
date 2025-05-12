// Take an alphabet and print its case

#include <stdio.h>

void main()
{
   char ch;

      printf("Enter an Alphabet:");
      ch = getchar();

      if(ch >= 65 && ch <= 90)
         printf("Uppercase");
      else
         printf("Lowercase");

}
