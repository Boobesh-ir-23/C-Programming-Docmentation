#include <stdio.h>

void disp_descend (int limit);

int main()
{
    int min_value = 1;
    disp_descend (min_value);
    
    return 0;
}

void disp_descend (int limit){
    for (int i = 5; i >= limit; i--){
        printf ("\n %d", i);
    }
}