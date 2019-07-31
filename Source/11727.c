#include <stdio.h>

int main(void) {
	int i, n;
	
	scanf("%d", &n);
	int arr[n];
	arr[0] = 1;
	arr[1] = 3;
	for(i = 2; i < n; i++) {
		arr[i] = ((arr[i - 2] * 2) + arr[i - 1]) % 10007;
	}
	printf("%d", arr[n - 1]);
	
	return 0;
}
