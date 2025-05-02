// Take centimeters and display inches and feet

#include <stdio.h>

void main()
{
  float cm, inches, feet;

     // input
     printf("Enter centimeters :");
     scanf("%f", &cm);

     // process
     inches = cm / 2.54;
     feet  = cm / 30;

     // output
     printf("Inches = %f\n", inches);
     printf("Feet   = %f", feet);

}
