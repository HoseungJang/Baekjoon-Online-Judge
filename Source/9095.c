#include <stdio.h>
#include <string.h>

int arr[12];

int main(void) {
	int i, j, caseCount, num;
	
	scanf("%d", &caseCount);
	memset(arr, 0, sizeof(arr));
	arr[0] = 1;
	
	for(i = 0; i < caseCount; i++) {
		scanf("%d", &num);
		if(arr[num] > 0) {
			printf("%d\n", arr[num]);
		}
		else {
			for(j = 1; j <= num; j++) {
				if(arr[j] == 0) {
					if(j - 1 >= 0) arr[j] += arr[j - 1];
					if(j - 2 >= 0) arr[j] += arr[j - 2];
					if(j - 3 >= 0) arr[j] += arr[j - 3];
				}
			}
			printf("%d\n", arr[num]);
		}
	}
	
	return 0;
}
