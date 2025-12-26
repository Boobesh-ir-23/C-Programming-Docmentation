#include <stdio.h>

void disp_2digit_ones5 (int start, int end);

int main()
{
    int start_val = 10;
    int end_val = 99;
    
    disp_2digit_ones5 (start_val, end_val);
    
    return 0;
}

void disp_2digit_ones5 (int start, int end){
    int sum = 0;
    for (int i = start; i <= end; i++){
        int x = i%10;
        if (x == 5){
            sum = sum + i;
        }
    }
    printf ("%d", sum);
}