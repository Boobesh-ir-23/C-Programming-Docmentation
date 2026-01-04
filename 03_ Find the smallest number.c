//Get 5 numbers from user and print the smallest number

#include <stdio.h>

void get_input (int num[], int size);
int small_number (int num[], int size);

int main()
{
    int in_num [5];
    get_input (in_num, 5);
    
    int result = small_number (in_num, 5);
    printf ("The smallest number is %d", result);
}

void get_input(int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter the number %d:", i+1);
        scanf ("%d",&num[i]);
    }
}

int small_number (int num[], int size){
    int s_num = num[0];
    for (int j = 1; j < size; j++){
        if (num[j] < s_num){
            s_num = num [j];
        }
    }
    return s_num;
}