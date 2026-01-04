// Get 5 number from user and print the average

#include <stdio.h>

void get_input (int num[], int size);
int avg (int num[], int size);

int main()
{
    int in_num [5];
    get_input (in_num, 5);
    
    int result = avg (in_num, 5);
    printf ("The average of the numbers is %d", result);
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number %d:", i+1);
        scanf ("%d", &num[i]);
    }
}

int avg (int num[], int size){
    int sum = 0;
    int avg;
    for (int j = 0; j < size; j++){
        sum = sum + num [j];
    }
    avg = sum/5;
    return avg;
}
