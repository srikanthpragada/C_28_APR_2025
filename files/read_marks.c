// Read marks from binary file - marks.dat

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int count, marks;



     // 1. open file
     fp = fopen("marks.dat", "rb"); // write binary

     // check whether open is successful
     if(fp == NULL) // open failed
     {
         printf("Sorry! Could not open file!");
         exit(1); // terminate program with exit code 1
     }

     while(1)
     {
         count = fread(&marks,sizeof(marks),1,fp);
         if(count == 0)  // EOF
            break;

         printf("%d ", marks);
     }

     //3. close file
     fclose(fp);

}
