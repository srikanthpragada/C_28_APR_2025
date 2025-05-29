// Take filename and display non-blank lines

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


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

          if (strlen(line) > 1)  // show line if it contains more than \n
             printf(line);


     }

     //3. close file
     fclose(fp);

}
