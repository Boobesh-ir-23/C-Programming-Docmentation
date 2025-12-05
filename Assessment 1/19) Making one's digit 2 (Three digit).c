#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter the three digit number: ");
    scanf ("%d", &x);

    if (x > 99 && x < 1000){
        y = x % 10;
        z = (x - y) + 2;
        printf ("The final output: %d", z);
    } else {
        printf ("Enter a valid three digit number");
    }
}