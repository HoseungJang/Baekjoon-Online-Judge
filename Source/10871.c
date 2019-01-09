#include <stdio.h>

int main() {
	int i, limit, size;
	scanf("%d %d", &size, &limit);
	int num[size];
	for(i=0;i<size; i++) {
		scanf("%d", &num[i]);
		if(num[i] < limit) {
			printf("%d ", num[i]);
		}
	}
	
	return 0;
}
