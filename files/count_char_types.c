// Read contents from a file and display how many uppercase, lowercase and digits
// are there

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  char filename[30];
  int ch, upper_count = 0, lower_count = 0, digit_count = 0;


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

         if(isupper(ch))
             upper_count ++;
         else
            if(islower(ch))
               lower_count++;
            else
                if(isdigit(ch))
                    digit_count++;

     }

     //3. close file
     fclose(fp);

     printf("No. of uppercase letters : %d\n", upper_count);
     printf("No. of lowercase letters : %d\n", lower_count);
     printf("No. of digts             : %d\n", digit_count);
}
