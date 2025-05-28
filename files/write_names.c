// Write names to names.txt

#include <stdio.h>


void main()
{
  FILE * fp;
  char  names[][20] = { "Dennis", "Larry", "Scott", "Richards"};
  int i;

     // 1. open file
     fp = fopen("names.txt", "wt");

     // 2. write to file
     for(i = 0; i < 4; i  ++)
     {
       fprintf(fp, "%s\n", names[i]);
     }

     //3. close file
     fclose(fp);
}
