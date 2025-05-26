#include <stdio.h>

struct time
{
   int h, m, s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int equal(struct time t1, struct time t2)
{
    return  t1.h == t2.h && t1.m == t2.m && t1.s == t2.s;
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

struct time max(struct time t1, struct time t2)
{
   if (totalseconds(t1) > totalseconds(t2))
         return t1;
   else
         return t2;
}

void main()
{
    struct time t1 = {10, 20, 30};
    struct time t2 = {11, 2, 3};

    struct time times[5];
    struct time big;

    //t2 = t1;

    print(t2);

    printf("\nResult : %d\n", equal(t1, t2));

    big  = max(t1, t2);

    print(big);

}
