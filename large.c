#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n){
    int largest =INT_MIN;
    int second = INT_MIN;
    int i;


for(i = 0; i < n; i++){
if(arr[i]>largest){
    second = largest;
    largest = arr[i];
}
else if (arr[i] > second && arr[i] != largest)
{
    second = arr[i];
}
}
return second;
}

int main(void)
{
    int numbers[]={4,9,2,7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("SECOND LARGEST : %d\n", secondLargest(numbers , size));
    return 0;
}