//Remove the even number - Store it in a new aray and print

#include <stdio.h>

void get_input (int num[], int size);
void remove_even (int num[], int size);
void display (int num[], int size);

int main()
{
    int in_num[5];
    get_input (in_num, 5);
    
    remove_even (in_num, 5);
    return 0;
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your number %d:",i+1);
        scanf ("%d", &num[i]);
    }
}

void remove_even (int num[], int size){
    int new_num[5];
    int x = 0;
    for (int j = 0;j < size; j++){
        if ((num[j]%2) != 0){
            new_num[x] = num[j];
            x++;
        }
    }
    display (new_num,x);
}

void display (int num[], int size){
    printf ("The new array (without even numbers): \n");
    for (int k = 0; k < size; k++){
        printf ("%d,", num[k]);
    }
}
