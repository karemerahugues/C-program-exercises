#include <stdio.h>
int main(void){
    int numbers[]={4, 9, 2, 7};
    int n= sizeof(numbers) / sizeof(numbers[0]);

    return 0;

    int sum = 0;
    int i;

    for (i = 0; i<n; i++){
        sum += numbers[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}