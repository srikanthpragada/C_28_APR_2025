// Difference ways to take char

#include <stdio.h>
#include <conio.h>

void main()
{
   char ch;

      printf("Enter a char: ");
      ch = getchar();
      printf("You entered: %c\n", ch);

      printf("Enter a char: ");
      ch = getche();
      printf("\nYou entered: %c\n", ch);

      printf("Enter a char: ");
      ch = getch();
      printf("\nYou entered: %c", ch);
}
