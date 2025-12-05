#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter your two digit number: ");
    scanf ("%d", &x);

    if (x > 9 && x < 100){
        y = x % 10;
        z = 10 + y;
        printf ("The final output: %d", z);
    } else {
        printf ("Invalid, enter a valid two digit number");
    }
}