#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf ("Enter your number: ");
    scanf ("%d", &x);

    y = x / 10;
    r = y % 2;
    z = x - (r * 5);

    printf ("The final output: %d", z);
}