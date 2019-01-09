#include <stdio.h>

int main() {
	int i, j, k = 0, count = 0, sum = 0;
	int score[8] = {0};
	int num[5] = {0};
	for(i = 0;i < 8;i++) {
		scanf("%d", &score[i]);
	}
	for(i = 0; i < 8; i++) {
		count = 0;
		for(j = 0; j < 8; j++) {
			if(score[i] > score[j]) {
				count++;
			}
		}
		if(count >= 3) {
			sum += score[i];
			num[k++] = i+1;
		}
	}
	printf("%d\n",sum);
	for(i=0;i<5;i++)
		printf("%d ", num[i]);
	return 0;
}
