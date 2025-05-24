// Pass by reference / address

#include <stdio.h>

void print_array(int a[5])
{
 int i;

     for(i = 0; i < 5; i ++)
        printf("%5d", a[i]);

     printf("\n");

}


void zeros(int a[])
{
 int i;

     for(i = 0; i < 5; i ++)
         a[i] = 0;
}


void main()
{
  int arr[] = {1, 2, 3, 4, 5};

   print_array(arr);

   zeros(arr);

   print_array(arr);
}
