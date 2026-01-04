//Ascending order of 5 numbers;

#include <stdio.h>

void get_input (int num[],int size);
void ascend (int num[], int size);

int main()
{
 int in_num[5];
 get_input (in_num, 5);
 
 ascend (in_num, 5);
 return 0;
}

void get_input (int num[], int size){
    for (int i = 0; i <size;i++){
        printf ("Enter the number %d:", i+1);
        scanf ("%d",&num[i]);
    }
}

void ascend (int num[], int size){
    int x,y;
    for (int j = 0; j < size; j++){
        for (int k = 0; k < size; k++){
            if (num[j] < num[k]){
                x = num[k];
                y = num[j];
                num[k] = y;
                num[j] = x;
            }
        }
    }
    printf ("The ascending order: \n");
    for (int m = 0; m < size; m++){
        printf ("%d,", num[m]);
    }
}
