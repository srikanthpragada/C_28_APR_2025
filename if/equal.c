// Take 2 numbers and display whether they are equal

#include <stdio.h>

void main()
{
  int n1, n2;

    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    if( n1 == n2)
        printf("Equal");
    else
        printf("Not Equal");
}
