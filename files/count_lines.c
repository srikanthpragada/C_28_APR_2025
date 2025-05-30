// Read contents from a file and display how many lines it has

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  char filename[30];
  int ch, count = 0;


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
         ch = fgetc(fp);  // read a char
         if(ch == EOF)  // end-of-file
            break;

         if(ch == '\n')
             count ++;
     }

     //3. close file
     fclose(fp);

     printf("No. of Lines : %d", count);
}
