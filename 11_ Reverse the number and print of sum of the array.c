//Reverse each number and print the sum of all numbers in new array

#include <stdio.h>

void get_input (int num[], int size);
void reverse (int num[], int size);
void display (int num[], int size);

int main()
{
    int in_num[5];
    
    get_input (in_num, 5);
    reverse (in_num, 5);
    
    return 0;
}

void get_input (int num[], int size)
{
    for (int i = 0; i < size; i++){
        printf ("Enter the number %d:", i+1);
        scanf ("%d", &num[i]);
    }
}

void reverse (int num[], int size)
{
    int sum,x,y;
    int new_num [5];
    for (int j = 0; j < size; j++){
        y = num[j];
        sum = 0;
        while (y > 0){
            x = y%10;
            sum = (sum*10) + x;
            y = y/10;
        }  
        new_num[j] = sum;
    }
    display (new_num, 5);
}

void display (int num[], int size){
    int sum = 0;
    for (int k = 0; k < size; k++){
        sum = sum + num[k];
    }
    printf ("The sum of the reversed numbers: %d", sum);
}

