// Read contents from source file and write into target file

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
  FILE *sfp, *tfp;
  char sfilename[30], tfilename[30];
  int ch, count = 0;


     printf("Enter source filename :");
     gets(sfilename);

     printf("Enter target filename :");
     gets(tfilename);

     sfp = fopen(sfilename, "rt");

     // check whether open is successful
     if(sfp == NULL) // open failed
     {
         printf("Sorry! Could not open source file!");
         exit(1); // terminate program with exit code 1
     }

     tfp = fopen(tfilename, "wt");

     // check whether open is successful
     if(tfp == NULL) // open failed
     {
         printf("Sorry! Could not open target file!");
         exit(1); // terminate program with exit code 1
     }

     while(1)
     {
         ch = fgetc(sfp);  // read a char
         if(ch == EOF)  // end-of-file
            break;

         fputc(ch, tfp);
     }

     //3. close file
     fclose(sfp);
     fclose(tfp);

     printf("Copied Successfully!");
}
