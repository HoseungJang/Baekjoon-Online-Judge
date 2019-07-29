#include <stdio.h>

int main(void) {
	int i, n, red, green, blue, min;
	
	scanf("%d", &n);
	int r[n];
	int g[n];
	int b[n];
	
	scanf("%d %d %d", &r[0], &g[0], &b[0]);
		
	for(i = 1; i < n; i++) {
		scanf("%d %d %d", &red, &green, &blue);
		
		r[i] = g[i - 1] + red < b[i - 1] + red ? g[i - 1] + red : b[i - 1] + red;
		g[i] = r[i - 1] + green < b[i - 1] + green ? r[i - 1] + green : b[i - 1] + green;
		b[i] = r[i - 1] + blue < g[i - 1] + blue ? r[i - 1] + blue : g[i - 1] + blue;
	}
	
	min = r[n - 1] < g[n - 1] ? r[n - 1] : g[n - 1];
	min = min < b[n - 1] ? min : b[n - 1];
	
	printf("%d", min);
	
	return 0;
}
