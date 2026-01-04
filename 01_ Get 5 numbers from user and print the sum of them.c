// Get 5 numbers from user and print the sum of numbers

#include <stdio.h>

void get_input (int arr [], int size);
int sum_of_all_digits (int arr[], int size);

int main()
{
    int num [5];
    
    get_input (num, 5);
    int result = sum_of_all_digits (num, 5);
    
    printf ("The sum of digits is %d", result);
}

void get_input (int arr[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number %d:", i+1);
        scanf ("%d", &arr[i]);
    }
}

int sum_of_all_digits (int arr[], int size){
    int sum = 0;
    for (int j = 0; j < size; j++){
        sum = sum + arr[j];
    }
    return sum;
}