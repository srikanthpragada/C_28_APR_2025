#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct rectangle
{
   int length, width;
};

int area(struct rectangle r)
{
    return r.width * r.length;
}

void print(struct rectangle r)
{
    printf("Length = %d, Width = %d, Area = %d\n", r.length, r.width, area(r));
}


struct rectangle max(struct rectangle r1, struct rectangle r2)
{
   if(area(r1) > area(r2))
      return r1;
   else
      return r2;
}

void main()
{
     struct rectangle rects[5];
     int i;

       srand(time(0));
       for(i = 0; i < 5; i ++)
       {

         rects[i].length = rand() % 100;
         rects[i].width = rand() % 100;

         print(rects[i]);
       }
}
