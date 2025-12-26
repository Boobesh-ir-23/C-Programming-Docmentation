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
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            p = 0;
            break;
        }
    }
    if (p == 0){
        printf ("Not Prime");
    } else {
        printf ("Prime");
    }
}