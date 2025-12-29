//LCM of three numbers

#include <stdio.h>

void disp_LCM3 (int num1, int num2, int num3);

int main()
{
    int x,y,z;
    printf ("Enter your first number: ");
    scanf ("%d", &x);
    
    printf ("Enter your second number: ");
    scanf ("%d", &y);
    
    printf ("Enter your third number: ");
    scanf ("%d", &z);
    
    disp_LCM3 (x,y,z);
    
}

void disp_LCM3 (int num1,int num2,int num3){
    int x1,y1;
    int x2,y2;
    int i,j; 
    int lcm1,lcm2;
    int k = 0;
    int m = 0;
    
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
            lcm1 = (num1 * num2)/y1;
            k = 1;
        } else {
            x1 = y1;
            y1 = i;
            i = 0;
        }
    }
    
    if (lcm1 > num3){
        x2 = lcm1;
        y2 = num3;
    } else {
        x2 = num3;
        y2 = lcm1;
    }
    
    while (m == 0){
        j = x2%y2;
        if (j == 0){
            lcm2 = (lcm1 * num3)/y2;
            m = 1;
            printf ("LCM of the three numbers is %d", lcm2);
        } else {
            x2 = y2;
            y2 = j;
            j = 0;
        }
    }
}