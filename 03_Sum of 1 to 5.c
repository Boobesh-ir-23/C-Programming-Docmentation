#include <stdio.h>

int disp_sum (int limit);

int main()
{
    int max_limit = 5;
    int result = disp_sum (max_limit);
    
    printf ("%d", result);
    return 0;
}


int disp_sum (int limit){
    int sum = 0;
    for (int i = 1; i <= limit; i++){
        sum = sum + i;
    }
    return sum;
}