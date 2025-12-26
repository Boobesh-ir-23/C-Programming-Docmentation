#include <stdio.h>

int disp_reverse_number (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_reverse_number (x);
    printf ("%d", result);
    
    return 0;
}

int disp_reverse_number (int num){
    int sum = 0;
    int x;
    while (num > 0){
        x = num%10;
        sum = (sum*10) + x;
        num = num/10;
    }
    return sum;
}