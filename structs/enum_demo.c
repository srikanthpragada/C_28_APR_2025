#include <stdio.h>
#include <time.h>
#include <stdlib.h>


enum payment {
    CASH, CARD, UPI
};

typedef enum payment MODE;

void main()
{
   enum payment mode;
   MODE pmode;


        mode = CARD;

        mode = UPI;

        if(mode == CASH)
            printf("Payment by Cash");
}
