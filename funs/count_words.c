// Take a string and print how many words the string has

#include <stdio.h>
#include <ctype.h>

int count_words(char s[30])
{
 int i, count = 0;

    for(i = 0; s[i] != '\0'; i ++)
    {
         if(s[i] == ' ')
            count ++;
    }

    return count + 1;
}

void main()
{
  char st[50];
  int w;

      printf("Enter a string:");
      gets(st);

      w = count_words(st);

      printf("No. of words = %d", w);
}
