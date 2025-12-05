#include<stdio.h>
int main()
{
    int x,y;
    printf ("Enter your two digit number: ");
    scanf ("%d", &x);

    if (x >= 10) {
        y = x % 10;
        printf ("The one's digit is: %d", y);
    } else {
        printf ("Invalid: Enter a two digit number");
    }
}