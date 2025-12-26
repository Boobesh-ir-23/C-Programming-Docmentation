#include <stdio.h>

int count_total_digits (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", & x);
    
    int result = count_total_digits (x);
    printf ("%d", result);
    
    return 0;
}

int count_total_digits (int num){
    int count = 0;
    while (num > 0){
        num = num/10;
        count++;
    }
    return count;
}