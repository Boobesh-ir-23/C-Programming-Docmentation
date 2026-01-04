//Find the biggest number among the five numbers

#include <stdio.h>

void get_input (int num[], int size);
int big_num (int num[], int size);

int main()
{
    int in_num [5];
    get_input (in_num, 5);
    
    int result = big_num (in_num, 5);
    printf ("The biggest number is %d", result);
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number %d:", i+1);
        scanf ("%d",& num[i]);
    }
}

int big_num (int num[], int size){
    int big_num1 = num [0];
    for (int j = 1; j < size; j++){
        if (num[j]>big_num1){
            big_num1 = num [j];
        }
    }
    return big_num1;
}