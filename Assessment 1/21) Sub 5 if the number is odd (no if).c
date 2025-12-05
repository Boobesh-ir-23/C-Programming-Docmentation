#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf ("Enter your number: ");
    scanf ("%d", &x);

    y = x % 2;
    r = y * 5;
    z = x - r;

    printf ("The final output: %d", z);
}