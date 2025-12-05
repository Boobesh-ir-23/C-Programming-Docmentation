#include<stdio.h>
int main()
{
    int x,y,z,sum,m,n, p,q;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

    if (x > 99 && x < 1000){
        y = x / 100;
        z = x % 100;
        m = z /10;
        n = z % 10;
        sum = y + m + n;
        loop: if (sum > 9) {
            p = sum/10;
            q = sum%10;
            sum = p + q;
            goto loop;
        }
        printf ("The final output: %d", sum);

    }else {
        printf( "Enter a valid three digit number");
    }

    
}