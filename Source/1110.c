#include <stdio.h>

int main() {
	int input, n, count = 0, result = 0;
	scanf("%d", &input);
	if(input < 10) {
		input*=10;
	}
	n = input;
	while(result != input || count == 0){
		result = (n%10*10) + ((n/10) + n%10)%10;
		n = result;
		count++;
	}
	printf("%d\n", count);
	
	return 0;
}
