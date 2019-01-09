#include <stdio.h>

int main() {
	int i, input, sum = 0;
	scanf("%d", &input);
	
	for(i=1;i<=input;i++) {
		sum += i;
	}
	printf("%d\n", sum);
	
	return 0;
}
