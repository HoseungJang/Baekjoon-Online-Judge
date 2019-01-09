#include <stdio.h>

void num_compare(int compare, int *pnum) {
	int i;
	for(i = 1; i < 8; i++) {
		if((pnum[i-1] - pnum[i]) != compare) {
			printf("mixed\n");
			return;
		}
	}
	if(compare == -1) {
		printf("ascending\n");
	}
	else {
		printf("descending\n");
	}
	return;
}

int main(void) {
	int num[8];
	int i, compare;
	
	for(i = 0; i < 8; i++) {
		scanf("%d", &num[i]);
	}
	
	switch(num[0]) {
		case 1 : {
			compare = -1;
			num_compare(compare, num);
			break;
		}
		case 8 : {
			compare = 1;
			num_compare(compare, num);
			break;
		}
		default : printf("mixed\n");
	}
	return;
}
