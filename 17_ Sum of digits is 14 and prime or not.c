#include <stdio.h>

void check_prime (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    check_prime (x);
    return 0;
}

void check_prime (int num){
    int p = 1;
    int sum = 0;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            p = 0;
            break;
        }
    }
    
    while (num > 0){
        sum = sum + (num%10);
        num = num/10;
    }
    if (p == 0 && sum == 14){
        printf ("Not Prime but sum of digits is 14");
    }
    
    if (p == 0 && sum != 14){
        printf ("Not prime & sum of digits is not 14");
    }
    
    if (p == 1 && sum == 14){
        printf ("Prime and sum of digits is 14");
    }
    
    if (p ==1 && sum != 14){
        printf ("Prime but sum of digits is not 14");
    }
}