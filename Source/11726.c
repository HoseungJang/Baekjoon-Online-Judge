#include <stdio.h>

int main(void) {
	int i, n;
	
	scanf("%d", &n);
	int a[n];
	
	a[0] = 1;
	a[1] = 2;
	
	for(i = 2; i < n; i++) {
		a[i] = (a[i - 1] + a[i - 2]) % 10007;
	}
	
	printf("%d", a[n - 1]);
	
	return 0;
}
