//LCM of two numbers

#include <stdio.h>
void disp_LCM2 (int num1, int num2);

int main()
{
    int x,y;
    printf ("Enter your first number: ");
    scanf ("%d", &x);
    
    printf ("Enter your second number: ");
    scanf ("%d", &y);
    
    disp_LCM2 (x,y);
}

void disp_LCM2 (int num1, int num2){
    int x1,y1;
    int i,lcm;
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
            lcm = (num1*num2)/y1;
            k = 1;
            printf ("The lcm of two given numbers are %d", lcm);
        } else {
            x1 = y1;
            y1 = i;
            i = 0;
        }
    }    
}