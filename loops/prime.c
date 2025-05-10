// Display count of factors of a number

#include <stdio.h>

void main()
{
   int i, num,  prime = 1; // flag


      printf("Enter a number :");
      scanf("%d",&num);


      for(i = 2; i <= num/2 ; i++)
      {
         if(num % i == 0)  // found a factor
         {
            printf("Not a prime number!");
            prime = 0; // false
            break;
         }
      }

      if(prime == 1)
         printf("Prime Number!");


}
