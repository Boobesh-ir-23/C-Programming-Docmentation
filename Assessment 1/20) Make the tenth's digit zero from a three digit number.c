#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf ("Enter your three digit number: ");
    scanf ("%d", &x);

   if (x > 99 && x <1000){
    y = x / 100;
    z = x % 10;
    sum = (y * 100) + z;
    printf ("The final output: %d", sum);
   } else{
    printf ("Entire a valid three digit number");
   }
}