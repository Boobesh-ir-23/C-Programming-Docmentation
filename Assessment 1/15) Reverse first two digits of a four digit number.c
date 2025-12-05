#include<stdio.h>
int main()
{
    int m,n,x,y,z,sum;
    printf ("Enter your four digit number: ");
    scanf ("%d", &x);

    if (x > 999 && x < 10000){
        y = x % 100;
        z = x - y;
        m = y / 10;
        n = y % 10;
        sum = z + (n * 10) + m;
        printf ("The final output: %d", sum);
    } else {
        printf ("Enter a valid number");
    }
}