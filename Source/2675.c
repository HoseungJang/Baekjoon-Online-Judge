#include <stdio.h>
#include <string.h>

void print_string(int count, char word) {
	int i;
	for(i = 0; i < count; i++) {
		printf("%c", word);
	}
	return;
}
int main(void) {
	int i, j, testcase;
	
	scanf("%d", &testcase);
	
	int rotation_times[testcase];
	char string[testcase][21];
	
	for(i = 0; i < testcase; i++) {
		scanf("%d %s", &rotation_times[i], string[i]);
	}
	
	for(i = 0; i < testcase; i++) {
		for(j = 0; j < strlen(string[i]); j++) {
			print_string(rotation_times[i], string[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
