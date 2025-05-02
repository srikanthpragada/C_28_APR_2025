// Take price and display discount @ 25%

#include <stdio.h>

void main()
{
  int price, discount;


     // input
     printf("Enter price :");
     scanf("%d", &price);

     // process
     discount = price * 25 / 100;

     // output
     printf("Discount = %d", discount);

}
