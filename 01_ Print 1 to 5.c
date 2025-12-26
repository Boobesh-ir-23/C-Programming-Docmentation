#include <stdio.h>

void disp_assend (int limit);

int main()
{
    int max_count = 5;
    disp_assend (max_count);

    return 0;
}

void disp_assend (int limit){
    for (int i = 1; i <= limit; i++){
        printf ("\n %d", i);
    }
}