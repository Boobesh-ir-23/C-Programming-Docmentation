#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf ("Enter a three digit number: ");
    scanf ("%d", &x);

    if (x > 99 && x < 1000){
        y = x/10;
        r = y%10;
        z = x%10;
        if (r == z){
            printf ("Success");
        } else{
            printf ("Failure");
        }
    } else {
        printf ("Enter a valid three digit number");
    }
}
