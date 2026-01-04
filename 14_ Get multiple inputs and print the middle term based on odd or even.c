//Get multiple inputs from user and stop when the input is 0... If no.of elements is odd, print the middle number else print the average of middle two numbers..

#include <stdio.h>

void get_input (int num[], int size);
void array_count (int num[], int size);
void check_even_or_odd (int num[], int size);

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
    check_even_or_odd(num, count);
}

void check_even_or_odd (int num[], int size){
    int x,y,even_mid,odd_mid;
    if (size%2 == 0){
        x = (size/2);
        y = x + 1;
        even_mid = (num[x]+num[y])/2;
        printf ("The middle number is: %d", even_mid);
    } else {
        x = (size/2) + 1;
        odd_mid = num[x];
        printf ("The middle number is: %d", odd_mid);
    }
}
