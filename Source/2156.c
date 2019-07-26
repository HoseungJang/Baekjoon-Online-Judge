#include <stdio.h>

int main(void) {
	int i, n, n1, n2, n3, max, relay = 2;
	
	scanf("%d", &n);
	int arr[n];
	int d[n];
	
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	switch(n) {
		case 1 : {
			printf("%d", arr[0]);
			return 0;
		}
		case 2 : {
			printf("%d", arr[0] + arr[1]);
			return 0;
		}
	}
	
	d[0] = arr[0];
	d[1] = arr[0] + arr[1];
	
	n1 = d[1];
	n2 = d[0] + arr[2];
	
	d[2] = n1 > n2 ? n1 : n2;
	
	for(i = 2; i < n; i++) {
		n1 = d[i - 1];
		n2 = arr[i] + arr[i - 1] + d[i - 3];
		n3 = arr[i] + d[i -2];
		
		d[i] = n1;
		d[i] = n2 > d[i] ? n2 : d[i];
		d[i] = n3 > d[i] ? n3 : d[i];
	}
	
	printf("%d", d[n -1]);
	
	return 0;
}
