#include <stdio.h>

void check_first_2digits_prime (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    check_first_2digits_prime (x);
    return 0;
}

void check_first_2digits_prime (int num){
    int y = num%100;
    int prime = 1;
    
    for (int i = 2; i < y; i++){
        if (y%i == 0){
            prime = 0;
            break;
        }
    }
    
    if (prime == 1){
        printf ("Prime");
    } else {
        printf ("Not Prime");
    } 
}