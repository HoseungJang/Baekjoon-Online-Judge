#include <stdio.h>

int main(void) {
    int i, n, t, arr[2][41];
    
    scanf("%d", &t);
    
    arr[0][0] = 1;
    arr[1][0] = 0;
    arr[0][1] = 0;
    arr[1][1] = 1;
    for(i = 2; i < 41; i++) {
        arr[0][i] = arr[0][i - 1] + arr[0][i - 2];
        arr[1][i] = arr[1][i - 1] + arr[1][i - 2];
    }
    
    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        
        printf("%d %d\n", arr[0][n], arr[1][n]);
    }
    
    return 0;
}