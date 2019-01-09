#include <stdio.h>

int a(int n){
	int i, digit[3];
	for(i=0;i<3;i++) {
		digit[i] = n%10;
		n/=10;
	}
	if(digit[0] - digit[1] == digit[1] - digit[2]) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int input;
	scanf("%d", &input);
	if(input < 100) {
		printf("%d\n", input);
	}
	else {
		int i, count = 99;
		for(i = 111; i <= input; i++){
			if(i==1000) {
				break;
			}
			count+=a(i);
		}
		printf("%d\n", count);
	}
}
