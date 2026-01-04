//Remove the prime numbers - Store in a new array - Print it

#include <stdio.h>

void get_input(int num[], int size);
void check_prime (int num[], int size);
void display (int num[], int size);

int main()
{
    int in_num [5];
    
    get_input (in_num, 5);
    check_prime (in_num, 5);
    
    return 0;
}

void get_input (int num[], int size){
    for (int i =0; i < size; i++){
        printf ("Enter your number %d:", i+1);
        scanf ("%d", &num[i]);
    }
}

void check_prime (int num[], int size){
    int new_num[5];
    int x = 0;
    for (int j = 0; j < size; j++){
        for (int k = 2; k < num[j]; k++){
            if (num[j]%k == 0){
                new_num [x] = num[j];
                x++;
                break;
            }
        }
    }
    display (new_num, x);
}

void display (int num[], int size){
    for (int m = 0; m < size; m++){
        printf ("\n");
        printf ("The new array (without prime numbers): \n");
        printf ("%d,", num[m]);
    }
}