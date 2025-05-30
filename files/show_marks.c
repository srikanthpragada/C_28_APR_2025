// Take rollno and display marks from binary file - marks.dat
// Random Access

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int rollno, pos, count, marks;

     // 1. open file
     fp = fopen("marks.dat", "rb"); // write binary

     // check whether open is successful
     if(fp == NULL) // open failed
     {
         printf("Sorry! Could not open file!");
         exit(1); // terminate program with exit code 1
     }

     printf("Enter rollno :");
     scanf("%d",&rollno);

     pos = (rollno - 1) * sizeof(int);
     fseek(fp, pos, SEEK_SET);  // move pointer to the required location

     count = fread(&marks,sizeof(marks),1,fp);
     if(count == 0)  // EOF
         printf("Sorry! Rollno not found!");
     else
         printf("Marks = %d", marks);

     //3. close file
     fclose(fp);

}
