#include <stdio.h>
#include <string.h>

int main() {
	int i, count = 0;
	char str[1000000] = {0};
	gets(str);
	if(isalpha(str[0])) {
		count++;
	}
	for(i=1; i < strlen(str); i++) {
		if(isalpha(str[i])) {
			if(isspace(str[i-1])) {
				count++;
			}
		}
	}
	printf("%d\n", count++);
	return 0;
}
