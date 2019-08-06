#include <stdio.h>

int main(void) {
	int i, j, n, k;
	
	scanf("%d %d", &n, &k);
	int coin[n];
	int d[k + 1];
	
	for(i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
	
	for(i = 0; i < k + 1; i++) {
		d[i] = i % coin[0] == 0 ? 1 : 0;
	}
	
	for(i = 1; i < n; i++) {
		for(j = coin[i]; j < k + 1; j++) {
			d[j] = d[j] + d[j - coin[i]];
		}
	}
	
	printf("%d", d[k]);
	
	return 0;
}
