// Take two strings and display relationship by length

#include <stdio.h>
#include <ctype.h>
#include <string.h>


void main()
{
  char s1[20], s2[20];
  int l1, l2;

      printf("Enter string 1:");
      gets(s1);

      printf("Enter string 2:");
      gets(s2);

      l1 = strlen(s1);
      l2 = strlen(s2);

      if(l1 == l2)
          printf("Both are equal!");
      else
        if(l1 > l2)
           printf("First string is bigger");
        else
           printf("Second string is bigger");

}

