#include <stdio.h>
#include <string.h>

int arr[1000001];

int getCount (int num) {
	int i, result, temp;
	for(i = 2; i <= num; i++) {
		result = arr[i - 1] + 1;
		if(i % 3 == 0) {
			temp = arr[i / 3] + 1;
			if(result > temp) {
				result = temp;
			}
		}
		if(i % 2 == 0) {
			temp = arr[i / 2] + 1;
			if(result > temp) {
				result = temp;
			}
		}
		arr[i] = result;
	}
	
	return result;
}

int main(void) {
	int num;
	
	scanf("%d", &num);
	
	memset(arr, 0, sizeof(arr));
	printf("%d", getCount(num));
	
	return 0;
}
