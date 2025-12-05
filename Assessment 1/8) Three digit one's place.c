#include<stdio.h>
int main()
{
    int x,y;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

    if (x >= 100) {
        y = x % 10;
        printf ("The one's digit is: %d", y);
    } else {
        printf ("Invalid, Enter a three digit number");
    }
}