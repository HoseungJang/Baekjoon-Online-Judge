#include <stdio.h>

int main() {
	int i, j, input;
	scanf("%d", &input);
	
	for(i=input;i>0;i--) {
		for(j=input; j>0; j--) {
			if(j>i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
