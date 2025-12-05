#include<stdio.h>
int main ()
{
    int m,n,x,y,z,sum;
    printf ("Enter the three-digit number: ");
    scanf ("%d", &x);

    if (x > 99 && x < 1000){
        y = x / 100;
        z = x % 100;
        m = z / 10;
        n = z % 10;
        sum = (n * 100) + (m * 10) + y;
        printf ("The reversed three digit number is: %d", sum);
    } else {
        printf ("Invalid, enter a three digit number");
    }
}