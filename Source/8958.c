#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, input;
	char quiz[81];
	
	scanf("%d", &input);
	int score[input];
	
	for(i=0;i<input;i++) {
		int sum = 0, count = 1;
		scanf("%s", quiz);
		fflush(stdin);
		for(j=0; j<strlen(quiz);j++) {
			if(quiz[j] == 'O') {
				sum += count++;
			}
			else {
				count = 1;
			}
		}
		score[i] = sum;
	}
	for(i=0;i<input;i++) {
		printf("%d\n", score[i]);
	}
	
	return 0;
}
