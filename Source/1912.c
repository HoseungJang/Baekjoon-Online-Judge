#include <stdio.h>

int main(void) {
	int i, j, n, max, k, temp = 0;
	
	scanf("%d", &n);
	int arr[n];
	
	scanf("%d", &arr[0]);
	
	max = arr[0];
	
	for(i = 1; i < n; i++) {
		scanf("%d", &arr[i]);
		
		arr[i] = arr[i] > arr[i] + arr[i - 1] ? arr[i] : arr[i] + arr[i - 1];
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	
	printf("%d", max);
	
	return 0;
}
