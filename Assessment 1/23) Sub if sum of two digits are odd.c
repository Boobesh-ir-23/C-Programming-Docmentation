#include<stdio.h>
int main()
{
    int x,y,z,r,m,n;
    printf ("Enter your number: ");
    scanf ("%d", &x);

    y = x/10;
    z = x % 10;
    r = y + z;

    m = r % 2;
    n = x - (m * 5);

    printf ("The final output: %d", n);
}