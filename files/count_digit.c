// Count digits from a file given on command line

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main(int argc, char * argv[])
{
  FILE * fp;
  int ch, count = 0;

     // 1. open file
     fp = fopen(argv[1], "rt");

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

         if(isdigit(ch))
             count ++;
     }

     //3. close file
     fclose(fp);

     printf("No. of Digits : %d", count);
}
