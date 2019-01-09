#include <stdio.h>

int main() {
	int i, size, max = 0;
	double avg = 0;
	scanf("%d", &size);
	int score[size];
	for(i=0;i<size;i++) {
		scanf("%d", &score[i]);
		if(max < score[i]) {
			max = score[i];
		}
	}
	
	for(i=0;i<size;i++) {
		avg += ((double)score[i]/max)*100.0;
	}
	
	printf("%.2f", avg/size);
	
	return 0;
}
