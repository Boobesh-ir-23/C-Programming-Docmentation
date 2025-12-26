#include <stdio.h>

int check_last_digit_odd (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = check_last_digit_odd (x);
    printf ("%d", result);
    
    return 0;
}

int check_last_digit_odd (int num){
    if (num%2 != 0){
        int dummy = num;
        int count = 0;
        int sub = 1;
        while (dummy > 10){
            dummy = dummy/10;
            count++;
        }
        for (int i = 0; i < count; i++){
            sub = sub * 10;
        }
        int final_res = num - sub;
        return final_res;
    } else {
        return num;
    }
}