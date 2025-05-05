// Take price and qty and display net amount after subtracting a discount of 15%
// and adding a tax of 8%

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, tax, after_discount, net_amount;


     // input
     printf("Enter price :");
     scanf("%d", &price);

     printf("Enter qty :");
     scanf("%d", &qty);

     // process
     amount = qty * price;
     discount = amount * 15 / 100;
     after_discount = amount - discount;
     tax = after_discount * 8 / 100;
     net_amount = after_discount + tax;

     // output
     printf("Amount        : %6d\n", amount);
     printf("- Discount    : %6d\n", discount);
     printf("After Discount: %6d\n", after_discount);
     printf("+ Tax         : %6d\n", tax);
     printf("Net Amount    : %6d\n", net_amount);

}
