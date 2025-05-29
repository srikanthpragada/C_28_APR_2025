// Take filename and display non-blank lines

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
  FILE * fp;
  char filename[30];
  int ch;
  int pos;


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

     printf("Enter starting position :");
     scanf("%d", &pos);

     // Move to the given position from the beginning
     fseek(fp, pos, SEEK_SET);

     while(1)
     {
        ch = fgetc(fp);
        if(ch == EOF)  // EOF
            break;

        putch(ch);
     }

     //3. close file
     fclose(fp);

}
