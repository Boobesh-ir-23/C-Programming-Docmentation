//HCF of two given numbers

#include <stdio.h>

void disp_count_HCF2 (int num1, int num2);

int main ()
{
   int x,y;
   printf ("Enter your first number: ");
   scanf ("%d", &x);
   
   printf ("Enter your second number: ");
   scanf ("%d", &y);
   
   disp_count_HCF2 (x,y);
}

void disp_count_HCF2 (int num1, int num2){
    int x1,y1,i;
    int k = 0;
    
    if (num2 > num1){
        x1 = num2;
        y1 = num1;
    } else {
        x1 = num1;
        y1 = num2;
    }
    
    while (k == 0){
        i = x1%y1;
        if (i == 0){
            k = 1;
            printf ("The HCF of the two numbers is %d", y1);
        } else {
            x1 = y1;
            y1 = i;
            i = 0;
        }
    }
}
