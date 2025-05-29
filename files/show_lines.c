// Read from the given file line by line

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  char filename[30], line[100];
  int ch;
  char * p;


     printf("Enter filename :");
     gets(filename);

     // 1. open file
     fp = fopen(filename, "rt");

     // check whether open is successful
     if(fp == NULL) // open failed
     {
         printf("Sorry! Could not open file!");
         exit(1); // terminate program with exit code 1
     }

     while(1)
     {
          p = fgets(line, 100, fp);

          if(p == NULL)  // EOF
            break;

          printf(line);

     }

     //3. close file
     fclose(fp);

}
