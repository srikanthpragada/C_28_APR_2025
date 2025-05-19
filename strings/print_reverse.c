// Take a string and display in reverse order

#include <stdio.h>
#include <conio.h>
#include <string.h>


void main()
{
  char s[20];
  int i;

      printf("Enter string:");
      gets(s);


      for(i = strlen(s) - 1; i >= 0  ; i --)
          putch(s[i]);
}

