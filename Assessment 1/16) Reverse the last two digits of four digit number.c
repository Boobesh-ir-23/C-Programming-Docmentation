#include<stdio.h>
int main()
{
    int x,y,z,m,n,sum;
    printf ("Enter your four digit number: ");
    scanf ("%d", &x);

    if (x > 999 && x < 10000){
        y = x/1000;
        z = (x % 1000);
        m = z / 100;
        n = z % 100;
        sum = (m*1000) + (y * 100) + n;
        printf ("The final output: %d", sum);
    } else {
        printf ("Enter a valid four digit number");
    }
}