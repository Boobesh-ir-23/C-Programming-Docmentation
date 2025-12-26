#include <stdio.h>

int disp_interchange_first_last_digit (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_interchange_first_last_digit (x);
    printf ("%d", result);
    
    return 0;
}

int disp_interchange_first_last_digit (int num){
    int l = num%10;
    int f = num;
    int count = 0;
    int mul = 1;
    
    while (f > 10){
        f = f/10;
        count++;
    }
    
    for (int i = 0; i < count; i++){
        mul = mul * 10;
    }
    
    int m = num%mul;
    
    int sum = (l*mul) + m + f - l;
    
    return sum;

}