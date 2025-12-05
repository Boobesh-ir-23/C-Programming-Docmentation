#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf ("Enter your two digit number to be reversed: ");
    scanf ("%d", &x);

    if (x > 9 && x < 100){
        y = x / 10;
        z = x % 10;
        sum = (z * 10) + y;
        printf ("The reversed number: %d", sum);
    } else {
        printf ("Invalid, enter a valid two digit number");
    }
}