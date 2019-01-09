#include <stdio.h>

int main() {
	int i, input, sum = 0, count = 0;
	scanf("%d", &sum);
	for(i=0;i<2;i++) {
		scanf("%d", &input);
		sum *= input;
	}
	for(i=0;i<10;i++) {
		int n = sum;
		while(n>0) {
			if(n%10 == i) {
				count++;
			}
			n/=10;
		}
		printf("%d\n", count);
		count=0;
	}
	
	return 0;
}
