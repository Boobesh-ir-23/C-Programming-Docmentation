#include <stdio.h>

void disp_odd (int start, int end);

int main()
{
    int first_value = 1;
    int last_value = 10;
    
    disp_odd (first_value, last_value);
    return 0;
}

void disp_odd (int start, int end){
    for (int i = start; i < end; i++){
        if (i%2 != 0){
            printf ("\n %d", i);
        }
    }
}