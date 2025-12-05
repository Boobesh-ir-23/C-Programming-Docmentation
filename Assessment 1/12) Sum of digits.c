#include<stdio.h>
int main()
{
    int a,b,x,y,z,sum;
    sum = 0;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

    if (x >= 100 && x <1000) {
       y = x /100;
       a = x % 100;
       z = a /10;
       b = a %10;
       sum = y + z + b;
       printf ("The sum is: %d", sum);
    } else {
        printf ("Invalid, Enter a three digit number");
    }
}