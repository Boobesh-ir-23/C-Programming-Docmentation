#include <stdio.h>

int disp_sum_all_digits (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d",& x);
    
    int result = disp_sum_all_digits (x);
    printf ("%d", result);
    
    return 0;
}

int disp_sum_all_digits (int num){
    int x;
    int sum = 0;
    while (num > 0){
        x = num % 10;
        sum = sum + x;
        num = num/10;
    }
    return sum;
}