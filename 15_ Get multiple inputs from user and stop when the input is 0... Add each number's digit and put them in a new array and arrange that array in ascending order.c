//Get multiple inputs from user and stop when the input is 0... Add each number's digit and put them in a new array and arrange that array in ascending order

#include <stdio.h>

void get_input (int num[], int size);
void add_digits (int num[], int size);
void ascend (int num[], int size);

int main()
{
    int in_num[100];
    
    get_input (in_num, 100);
    add_digits (in_num, 100);
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number: ");
        scanf ("%d", &num[i]);
        
        if (num[i] == 0){
        break;
        }
    }
}

void add_digits (int num[], int size){
    int x,y;
    int new_num[100];
    int count = 0;
    for (int j = 0; j < size; j++){
        
        if (num[j] == 0){
            break;
        }
        
        x = num[j];
        int sum = 0;
        count++;
        
        while (x > 0){
            y = x%10;
            x = x/10;
            sum = sum + y;
        }
        new_num[j] = sum;
    }
    ascend (new_num,count);
}

void ascend (int num[], int size){
    int a,b;
    for (int m = 0; m < size; m++){
        for (int n = 0; n < size; n++){
            if (num[m] < num [n]){
                a = num[m];
                b = num[n];
                num[m] = b;
                num[n] = a;
            }
        }
    }
    printf ("The final array output: \n");
    for (int p = 0; p < size; p++){
        printf ("%d,", num[p]);
    }
}