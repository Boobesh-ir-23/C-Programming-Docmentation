#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

    if (x >= 100 && x < 1000) {
        y = x % 100;
        z = y/10;
        printf ("The one's digit is: %d", z);
    } else {
        printf ("Invalid, Enter a three digit number");
    }
}