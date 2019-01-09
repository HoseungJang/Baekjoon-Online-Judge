#include <stdio.h>

int count, i, avg;

int getnum(int n) {
	if(i == n) {
		avg/=n;
		return 0;
	}
	int num;
	scanf("%d", &num);
	avg+=(double)num;
	
	i++;
	getnum(n);	
	if(avg < num) {
		count++;
	}
	return count;
}

int main() {
	int j, tc, n;
	scanf("%d", &tc);
	double result[tc];
	for(j=0;j<tc;j++) {
		scanf("%d", &n);
		result[j] = (100.0/(double)n)*(double)getnum(n);
		avg = 0;
		count = 0;
		i = 0;
	}
	for(i=0;i<tc;i++) {
		printf("%.3f%\n", result[i]);
	}
	return 0;
}
