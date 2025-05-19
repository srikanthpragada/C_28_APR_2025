// Take a string and print how only alphabets

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char st[50];
  int i;

      printf("Enter a string:");
      gets(st);

      for(i = 0; st[i] != '\0'; i ++)
      {

         if(isalpha(st[i]))
             putch(st[i]);
      }

}
