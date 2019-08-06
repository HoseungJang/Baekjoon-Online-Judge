#include <stdio.h>

int main(void) {
	int i, j, n;
	
	scanf("%d", &n);
	int arr[n + 1];
	int d[n + 1];
	
	for(i = 1; i < n + 1; i++) {
		scanf("%d", &arr[i]);
	}
	
	d[0] = 0;
	
	for(i = 1; i < n + 1; i++) {
		d[i] = 0;
		for(j = 1; j <= i; j++) {
			d[i] = d[i] > arr[j] + d[i - j] ? d[i] : arr[j] + d[i - j];
		}
	}
	
	printf("%d", d[n]);
	
	return 0;
}
