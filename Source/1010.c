#include <stdio.h>

int main(void) {
	int i, j, k, t, n, m;
	
	scanf("%d", &t);
	int d[30][30];
	
	for(i = 0; i < 30; i++) {
		d[0][i] = i + 1;
	}
	
	for(i = 1; i < 30; i++) {
		for(j = i; j < 30; j++) {
			if(i == j) {
				d[i][j] = 1;
			}
			else {
				d[i][j] = d[i - 1][j - 1] + d[i][j - 1];
			}
		}
	}
	
	for(i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", d[n - 1][m - 1]);
	}
		
	return 0;
}
