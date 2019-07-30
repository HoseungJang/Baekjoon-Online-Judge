#include <stdio.h>

int main(void) {
	int i, j, n, sum = 0;
	
	scanf("%d", &n);
	int arr[n][10];
	arr[0][0] = 0;
	
	for(i = 1; i < 10; i++) {
		arr[0][i] = 1;
	}
	
	for(i = 1; i < n; i++) {
		for(j = 0; j < 10; j++) {
			if(j == 0) {
				arr[i][j] = (arr[i - 1][1]);
			}
			else if(j == 9) {
				arr[i][j] = (arr[i - 1][8]);
			}
			else {
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
			}
		}
	}
	
	for(i = 0; i < 10; i++) {
		sum = (sum + arr[n - 1][i]) % 1000000000;
	}
	
	printf("%d", sum % 1000000000);
	
	return 0;
}
