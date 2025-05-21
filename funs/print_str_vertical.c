#include <stdio.h>


void print_vertical(char s[20])
{
 int i;

    for(i = 0; s[i] != '\0'; i ++)
        printf("%c\n", s[i]);
}


void main()
{

  char s[20] = "Hello";

      print_vertical(s);
}
