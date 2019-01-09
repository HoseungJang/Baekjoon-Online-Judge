#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char input[100];
	
	scanf("%s", input);
	
	for(i=0;i<strlen(input);i++) {
		if(i!=0&&i%10 == 0) {
			printf("\n");
		}
		printf("%c", input[i]);
	}
	return 0;
}
