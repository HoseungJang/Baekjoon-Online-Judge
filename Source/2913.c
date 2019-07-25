#include <stdio.h>
#include <string.h>

long long arr[91];

long long fibo(int i) {
	if(i <= 2) {
		return 1;
	}
	
	if(arr[i] > 0) {
		return arr[i];
	}
	
	arr[i] = fibo(i - 1) + fibo(i - 2);
	return arr[i];
}

int main(void) {
	int num;
	
	memset(arr, 0, sizeof(arr));
	scanf("%d", &num);
	printf("%lld", fibo(num));
	
	return 0;
}
