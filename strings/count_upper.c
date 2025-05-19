// Take a string and print how many uppercase letters the string has

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

         if(isupper(st[i]))
             count ++;
      }

      printf("Count = %d", count);
}
