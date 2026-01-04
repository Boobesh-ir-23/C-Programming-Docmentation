//Get multiple inputs from user and stop when the input is 0... If first and last digit is equal print sucess else failure

#include <stdio.h>

void get_input (int num[], int size);
void array_count (int num[], int size);
void check (int num[], int size);

int main()
{
    int in_num[100];
    
    get_input(in_num, 100);
    array_count (in_num, 100);
}

void get_input (int num[], int size){
    for (int i = 0; i< size; i++){
        printf ("Enter your number: ");
        scanf ("%d",& num[i]);
        
        if (num[i] == 0){
            break;
        }
    }
}

void array_count (int num[], int size){
    int count = 0;
    for (int j = 0; j < size; j++){
        if (num[j] != 0){
            count++;
        } else {
            break;
        }
    }
    check (num, count);
}

void check (int num[], int size){

    if (num[0] == num[size - 1]){
        printf ("Success");
    } else {
        printf ("Failure");
    }
}
