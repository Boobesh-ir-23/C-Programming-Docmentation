#include <stdio.h>

void disp_2digit_odd_sum7 (int start, int end);

int main()
{
    int start_val = 10;
    int end_val = 100;
    
    disp_2digit_odd_sum7 (start_val, end_val);
}

void disp_2digit_odd_sum7 (int start, int end){
    for (int i = start; i < end; i++){
        if (i%2 != 0){
            int j = i;
            int sum = 0;
            while (j > 0){
                sum = sum + (j%10);
                j = j/10;
            }
            if (sum == 7){
                printf ("\n %d", i);
            }
        }
    }
}