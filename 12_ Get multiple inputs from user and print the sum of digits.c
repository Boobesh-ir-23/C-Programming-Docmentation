//Getting numbers until user inputing 0 and counting the number of inputs given by the user...

#include <stdio.h>

void get_input (int num[], int size);
int sum (int num[], int size);

int main()
{
    int in_num[100];
    get_input (in_num, 100);
    
    int result = sum (in_num, 100);
    printf ("The sum of given numbers: %d", result);
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number: ");
        scanf ("%d", & num[i]);
        
        if (num[i] == 0){
            break;
        } else {
            continue;
        }
    }
}

int sum (int num[], int size){
    int sum1 = 0;
    for (int j = 0; j < size; j++){
        if (num[j] != 0){
            sum1 = sum1 + num[j];
        } else {
            break;
        }
    }
    return sum1;
}