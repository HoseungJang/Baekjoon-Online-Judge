#include <stdio.h>

int main(void) {
	int i, j, n, max;
	
	scanf("%d", &n);
	int a[n][n];
	
	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 1; i < n; i++) {
		for(j = 0; j <= i; j++) {
			if(j == 0) {
				a[i][j] += a[i - 1][j];
			}
			else if(j == i) {
				a[i][j] += a[i-1][j-1];
			}
			else {
				int tmp1 = a[i - 1][j - 1];
				int tmp2 = a[i - 1][j];
				a[i][j] += tmp1 > tmp2 ? tmp1 : tmp2;
			}
		}
	}
	
	max = a[n - 1][0];
	for(i = 1; i < n; i++) {
		if(max < a[n - 1][i]) {
			max = a[n - 1][i];
		}
	}
	
	printf("%d", max);
	
	return 0;
}
