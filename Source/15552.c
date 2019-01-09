#include <stdio.h>

int main() {
	int i, size, A, B;
	scanf("%d", &size);
	int result[size];
	
	for(i=0;i<size;i++){
		scanf("%d %d", &A, &B);
		result[i] = A+B;
	}
	
	for(i=0;i<size;i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}
