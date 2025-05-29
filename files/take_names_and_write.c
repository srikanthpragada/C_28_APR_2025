// Write names taken from user to names.txt

#include <stdio.h>


void main()
{
  FILE * fp;
  char  name[30];
  int i;


     // 1. open file
     fp = fopen("names.txt", "wt");

     // 2. write to file
     for(i = 1; i <= 5; i  ++)
     {
       printf("Enter name :");
       gets(name);
       fprintf(fp, "%s\n", name);
     }

     //3. close file
     fclose(fp);
}
