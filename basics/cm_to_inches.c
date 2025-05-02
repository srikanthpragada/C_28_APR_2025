// Program to take cm from user and print inches
// Date : 01-MAY-2025

#include <stdio.h>

void main()
{
    float cm, inches;


      printf("Enter centimeters :");
      scanf("%f", &cm);

      inches = cm / 2.54;

      printf("Inches = %f", inches);
}
