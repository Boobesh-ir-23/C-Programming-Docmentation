#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf ("Enter your two digit number: ");
    scanf ("%d", &x);

    if (x > 9 && x < 100){
        y = x/10;
        z = x % 10;
        sum = y + z;
        printf ("The final output: %d", sum);
    } else {
        printf ("Enter a valid two digit number");
    }
}