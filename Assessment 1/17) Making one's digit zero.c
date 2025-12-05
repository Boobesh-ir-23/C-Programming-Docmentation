#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter the two digit number: ");
    scanf ("%d", &x);

    if (x > 9 && x < 100){
        y = x % 10;
        z = x - y;
        printf ("The final output: %d", z);
    }else {
        printf ("Enter a valid two digit number");
    }
}