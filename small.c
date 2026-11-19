#include <stdio.h>
int smallest(int arr[], int n){
    int min = arr[0];
    int i;
    for(i = 1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            
        }
    }
    return min;
}

int main(void){
    int numbers[] = {4,9,2,7};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("Smallest: %d\n, smallest(numbers,size)");
    return 0;
}