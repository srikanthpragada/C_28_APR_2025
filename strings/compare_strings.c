// Take two strings and display relationship

#include <stdio.h>
#include <ctype.h>
#include <string.h>


void main()
{
  char s1[20], s2[20];
  int rel;

      printf("Enter string 1:");
      gets(s1);

      printf("Enter string 2:");
      gets(s2);

      rel = strcmp(s1, s2);

      if(rel == 0)
          printf("Both are equal!");
      else
        if(rel > 0)
           printf("First string is bigger");
        else
           printf("Second string is bigger");

}

