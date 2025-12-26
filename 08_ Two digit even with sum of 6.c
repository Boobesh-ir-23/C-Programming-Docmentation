#include <stdio.h>

void disp_2digit_even_sum6 (int start, int end);

int main()
{
    int start_val = 10;
    int end_val = 99;
    
    disp_2digit_even_sum6 (start_val, end_val);
    
    return 0;
}

void disp_2digit_even_sum6 (int start, int end){
    for (int i = start; i <= end; i++){
        if (i%2 == 0){
            int x = i;
            int sum = 0;
            while (x > 0){
                sum = sum + (x%10);
                x = x/10;
            }
            if (sum == 6){
                printf ("\n %d", i);
            }
        }
    }
}