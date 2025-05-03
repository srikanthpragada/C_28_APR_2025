// Take price and display net price after subtracting a discount of 25%

#include <stdio.h>

void main()
{
  int price, discount, net_price;


     // input
     printf("Enter price :");
     scanf("%d", &price);

     // process
     discount = price * 25 / 100;
     net_price = price - discount;

     // output
     printf("Price        : %6d\n", price);
     printf("- Discount   : %6d\n", discount);
     printf("Net Price    : %6d", net_price);

}
