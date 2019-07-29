#include <stdio.h>

int main(void) {
    int i, n;
    
    scanf("%d", &n);
    int arr[n], d[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    d[0] = arr[0];
    d[1] = arr[0] + arr[1] > arr[1] ? arr[0] + arr[1] : arr[1];
    
    d[2] = (arr[0] + arr[2]) > (arr[1] + arr[2]) ? (arr[0] + arr[2]) : (arr[1] + arr[2]);
    
    for(i = 3; i < n; i++) {
        d[i] = (d[i - 2] + arr[i]) > (d[i - 3] + arr[i - 1] + arr[i]) ? (d[i - 2] + arr[i]) : (d[i - 3] + arr[i - 1] + arr[i]); 
    }
    
    printf("%d", d[n - 1]);
    
    return 0;
}