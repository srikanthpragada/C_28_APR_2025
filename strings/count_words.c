// Take a string and print how many words the string has

#include <stdio.h>
#include <ctype.h>

void main()
{
  char st[50];
  int i, count = 0;

      printf("Enter a string:");
      gets(st);

      for(i = 0; st[i] != '\0'; i ++)
      {

         if(st[i] == ' ')
             count ++;
      }

      printf("No. of words = %d", count + 1);
}
