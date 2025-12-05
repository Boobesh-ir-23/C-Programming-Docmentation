#include<stdio.h>
int main()
{
    int x,y,z,r,m,n;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

    y = x/100;
    z = x % 100;

    m = z % 2;
    n = y % 2;

    r = x - (m*n*5);

    printf ("The final output: %d", r);
}