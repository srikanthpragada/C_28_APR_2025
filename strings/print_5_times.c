// Take name and print it vertically

#include <stdio.h>

void main()
{
  char name[20];
  int i;

      printf("Enter your name:");
      gets(name);

      for(i = 1; i <= 5; i ++)
      {
          puts(name);  // printf("%s\n", name);
      }

}
