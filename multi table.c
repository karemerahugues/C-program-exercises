#include <stdio.h>
int main(void){
    int i;
    int n;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        int m = i*n;
        printf("%d * %d = %d\n", n , i, m);
        return 0;
    }
}