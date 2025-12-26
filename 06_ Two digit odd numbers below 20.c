#include <stdio.h>

void disp_2digit_odd_below20 (int start, int end);

int main()
{
    int start_val = 11;
    int end_val = 20;
    
    disp_2digit_odd_below20 (start_val, end_val);
    return 0;
}

void disp_2digit_odd_below20 (int start, int end){
    for (int i = start; i < end; i++){
        if (i%2 != 0){
            printf ("\n %d", i);
        }
    }
} 