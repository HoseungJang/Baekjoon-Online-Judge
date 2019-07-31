#include <stdio.h>

int main(void) {
	int i, j, n, result = 0;
	
	scanf("%d", &n);
	int arr[n];
	int d[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	d[0] = 0;
	for(i = 1; i < n; i++) {
		int max = -1;
		for(j = 0; j < i; j++) {
			if(arr[i] > arr[j] && max < d[j]) {
				max = d[j];
			}
		}
		
		if(result < max + 1) {
			result = max + 1;
		}
		
		d[i] = max + 1;
	}
	
	printf("%d", result + 1);
	
	return 0;
}
