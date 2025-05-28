// Read names from names.txt

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
  FILE * fp;
  int ch;

     // 1. open file
     fp = fopen("names.txt", "rt");

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

         putch(ch);
     }

     //3. close file
     fclose(fp);
}
