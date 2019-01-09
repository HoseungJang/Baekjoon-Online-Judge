#include <stdio.h>

int main(void) {
	int i, input, sum = 0;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &input);
		if(input < 40) {
			sum += 40;
		}
		else {
			sum += input;
		}
	}
	printf("%d\n", sum/5);
}
