// Write marks of 10 students into binary file - marks.dat

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int i, marks;



     // 1. open file
     fp = fopen("marks.dat", "wb"); // write binary

     // check whether open is successful
     if(fp == NULL) // open failed
     {
         printf("Sorry! Could not open file!");
         exit(1); // terminate program with exit code 1
     }

     // write 10 marks
     srand(time(0));
     for(i = 1; i <= 10; i ++)
     {
         marks = rand() % 100;
         fwrite(&marks, sizeof(marks),1,fp);
     }

     //3. close file
     fclose(fp);

}
