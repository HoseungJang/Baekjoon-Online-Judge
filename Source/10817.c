#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	
	if(num1 > num2) {
		return 1;
	}
	else if(num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}
int main() {
	int num[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	
	qsort(num, sizeof(num)/sizeof(int), sizeof(int), compare);
	
	printf("%d\n", num[1]);
	
	return 0;
}
