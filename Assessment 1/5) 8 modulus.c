#include<stdio.h>
int main()
{
    int x,y;
    printf ("Enter the number: ");
    scanf ("%d", &x);
    y = x%8;
    printf ("The output is: %d", y);
}