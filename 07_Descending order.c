//Descending orderof 5 numbers;

#include <stdio.h>

void get_input(int num[], int size);
void descend (int num[], int size);

int main()
{
    int in_num[5];
    get_input (in_num, 5);
    
    descend (in_num, 5);
    return 0;
}

void get_input (int num[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter the number %d:", i+1);
        scanf ("%d", &num[i]);
    }
}

void descend (int num[], int size){
    int x,y;
    for (int j = 0; j < size; j++){
        for (int k = 0; k < size; k++){
            if (num[j] > num[k]){
                x = num[j];
                y = num[k];
                num[j] = y;
                num[k] = x;
            }
        }
    }
    
    printf ("The descending order is \n");
    for (int m = 0; m < size;m++){
        printf ("%d,", num[m]);
    }
}